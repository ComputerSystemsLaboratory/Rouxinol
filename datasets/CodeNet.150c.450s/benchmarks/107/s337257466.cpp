#include<stdio.h>
#include<string.h>
#include<iostream>
#include <fstream>
#include<iostream>
#include <sstream>
#include<string>
#include <list>

using namespace std;
const int M = 1003;
const int INIT = (M*M + 1);
int C[M][M];// = { 0 };

int countmatchstring(const char* p1, const char*p2, int length1, int length2,int x, int y, int i, int j,int cost)
{
	int w = (i - 1 > j - 1) ? i - 1 : j - 1;
	if (p1[x + i] == p2[y + j])
	{
		x = x + i;
		y = y + j;
		if (x == length1 - 1 && y == length2 - 1)
		{
			C[x][y] = 0;
			return w;
		}
		if (x == length1 - 1 || y == length2 - 1)
		{
			while (1);
		}
		C[x][y] = countmatchstring(p1, p2, length1, length2, x, y, 1, 1, w + cost);
		return w + C[x][y];

	}
	if (C[x + i][y + j] == INIT)
	{
		int c1 = INIT, c2 = INIT,c3 = INIT;
		if (x + i + 1 < length1)
		{
			for (int p = 1; x + i + p < length1; ++p)
			{
				if (p1[x + i + p] == p2[y + j])
				{
					c1 = countmatchstring(p1, p2, length1, length2, x, y, i + p, j, cost);
					break;
				}
			}
		}
		if (y + j + 1 < length2)
		{
			for (int q = 1; y + j + q < length2; ++q)
			{
				if (p1[x + i] == p2[y + j + q])
				{
					c2 = countmatchstring(p1, p2, length1, length2, x, y, i, j + q, cost);
					break;
				}
			}
		}
		if ((x + i + 1 < length1) && (y + j + 1 < length2))
		{
			c3 = countmatchstring(p1, p2, length1, length2, x, y, i + 1, j + 1, cost);
		}
		int c = (c1 < c2 ? c1 : c2);
		c = (c < c3 ? c : c3);
		C[x + i][y + j] = c;
	}
	return C[x + i][y + j];
}

int main(){
	std::istream & c_in = cin;
	for (int i = 0; i < M; ++i){
		for (int j = 0; j < M; ++j){
			C[i][j] = INIT;
		}
	}
	string s1, s2;
	getline(c_in, s1);
	getline(c_in, s2);
	s1 = "A" + s1 + "B";
	s2 = "A" + s2 + "B";
	const char* p1 = s1.c_str();
	const char* p2 = s2.c_str();
	countmatchstring(p1, p2, s1.length(), s2.length(),0, 0, 1,1,0);
	printf("%d\n", C[1][1]);
	return 0;
}