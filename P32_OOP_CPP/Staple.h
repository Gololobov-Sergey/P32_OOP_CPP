#pragma once
#include <iostream>
#include"Stack.h"


bool StapleOpenCheck(const char staple)
{
    switch (staple)
    {
    case '(' : case '{' : case '<' : case '[' : return true;
    case ')': case '}': case '>': case ']': return false;
    }
}

int TypeOfStaple(const char staple)
{
    switch (staple)
    {
    case'(':case')': return 1;
    case'<':case'>': return 2;
    case'{':case'}': return 3;
    case'[':case']': return 4;
    }
}