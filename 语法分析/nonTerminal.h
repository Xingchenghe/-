#pragma once
#include <string>
using namespace std;
struct nonTerminal
{
	char left;
	string right;
	int size = -1;
	char first[10];
};
