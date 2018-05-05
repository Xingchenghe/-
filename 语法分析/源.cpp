#include <iostream>
#include <fstream>
#include <set>
#include "nonTerminal.h"
using namespace std;

bool isTerminal(char c)
{
	if (c >= 'A'&&c <= 'Z')
		return false;
	return true;
}

int main()
{
	int firstTable[128][128] = { 0 };
	nonTerminal nt[10];
	ifstream inNT("grammar.txt");
	char c;
	string s;
	int cnt = -1;
	while (!inNT.eof())
	{
		inNT >> c;
		nt[++cnt].left = c;
		inNT >> s;
		nt[cnt].right = s;
	}
	for (int i = 0; i <= cnt; i++)
	{
		firstTable[nt[i].left][nt[i].right[0]] = 1;
	}
	for (int i = 0; i <= cnt; i++)
	{
		for(int j=0;j<128;j++)
	}
	/*for (int i = 0; i <= 127; i++)
	{
		for (int j = 0; j < 128; j++)
			cout << firstTable[i][j];
		cout << endl;
	}*/
	system("pause");
}