#pragma once


template<class TKey, class TVal>
struct BTreeNode
{
	TVal value;
	TKey key;
	BTreeNode* left  = nullptr;
	BTreeNode* right = nullptr;

	BTreeNode(const TKey& key, const TVal& value) : value(value), key(key) {}


	void print()
	{
		if (left != nullptr)  left->print();
		cout << value << " ";
		if (right != nullptr) right->print();
	}

	void del()
	{
		if (left  != nullptr) left->del();
		if (right != nullptr) right->del();
		delete this;
	}

	TVal* getValue(const TKey& key)
	{
		if (key == this->key) return &value;
		if (key < this->key && left != nullptr) left->getValue(key);
		if (key > this->key && right != nullptr) right->getValue(key);
		return nullptr;
	}
};


template<class TKey, class TVal>
class BTree
{
	BTreeNode<TKey, TVal>* root = nullptr;

	BTreeNode<TKey, TVal>* push_r(const TKey& key, const TVal& value, BTreeNode<TKey, TVal>*& node);
	BTreeNode<TKey, TVal>* remove(const TKey& key, BTreeNode<TKey, TVal>*& node);

public:
	~BTree();
	void print();
	void clear();
	bool push(const TKey& key, const TVal& value);
	bool push_r(const TKey& key, const TVal& value);
	bool remove(const TKey& key);
};

template<class TKey, class TVal>
BTreeNode<TKey, TVal>* BTree<TKey, TVal>::push_r(const TKey& key, const TVal& value, BTreeNode<TKey, TVal>*& node)
{
	if (!node)
	{
		node = new BTreeNode<TKey, TVal>(key, value);
		return node;
	}

	if (key < node->key)
		node->left = push_r(key, value, node->left);
	else if (key > node->key)
		node->right = push_r(key, value, node->right);
	return node;
}

template<class TKey, class TVal>
BTreeNode<TKey, TVal>* BTree<TKey, TVal>::remove(const TKey& key, BTreeNode<TKey, TVal>*& node)
{
	BTreeNode<TKey, TVal>* tmp; //���������� ��������� ����
	BTreeNode<TKey, TVal>* next;
	if (!node)
		cout << "Item not found";
	else
		if (key < node->key) //������� ������
			node->left = remove(key, node->left);        //���� �� ������ �����
		else
			if (key > node->key) //������� ������
				node->right = remove(key, node->right);  //���� �� ������� �����
			else
			{
				tmp = node;            //���������� ��������� ����
				if (!node->right)
					node = node->left; //������ 1
				else if (!node->left)
					node = node->right; //������ 1
				else
				{   //������ 2
					next = node->left; //�������� ����� �����
					if (next->right) { //������ ����� �� �����
						while (next->right->right)
							next = next->right;
						//������������ �� ���������� ������
						node->key = next->right->key;
						node->value = next->right->value;
						//���������� ��������
						tmp = next->right; //���� ���� �������
						next->right = next->right->left; //������������
					}
					else
					{//������ ���� �����
						node->key = next->key;
						tmp = next; //���� ���� �������
						node->left = node->left->left;
					}
				}
				delete tmp;
			}
	return node;
}

template<class TKey, class TVal>
BTree<TKey, TVal>::~BTree()
{
	clear();
}

template<class TKey, class TVal>
void BTree<TKey, TVal>::print()
{
	if (root)
		root->print();
	cout << endl;
}

template<class TKey, class TVal>
void BTree<TKey, TVal>::clear()
{
	if (root)
		root->del();
}

template<class TKey, class TVal>
bool BTree<TKey, TVal>::push(const TKey& key, const TVal& value)
{
	if (!root)
	{
		root = new BTreeNode<TKey, TVal>(key, value);
		return true;
	}

	BTreeNode<TKey, TVal>* current = root;
	do
	{
		if (key < current->key) 
		{
			if (current->left)
			{
				current = current->left;
			}
			else
			{
				current->left = new BTreeNode<TKey, TVal>(key, value);
				return true;
			}
		}
		else if (key > current->key)
		{
			if (current->right)
			{
				current = current->right;
			}
			else
			{
				current->right = new BTreeNode<TKey, TVal>(key, value);
				return true;
			}
		}
		else
		{
			return false;
		}
	} while (true);
}

template<class TKey, class TVal>
bool BTree<TKey, TVal>::push_r(const TKey& key, const TVal& value)
{
	return push_r(key, value, root);
}

template<class TKey, class TVal>
bool BTree<TKey, TVal>::remove(const TKey& key)
{
	return remove(key, root);
}
