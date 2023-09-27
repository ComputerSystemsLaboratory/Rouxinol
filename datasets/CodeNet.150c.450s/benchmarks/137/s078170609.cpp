#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<utility>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<list>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define fori(i,k,n) for(int i=k;i<(int)n;i++)
#define F first
#define S second
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
struct XY
{
	int x;
	int y;
};

/*
(char)'1' - (int)48 = (int)1;
　1111181
*/
////////////////////////////////////////////////////
int M = 1046527;
char T[1046527][15];
int ci(char a)
{
	switch (a)
	{
	case 'A':return 1; break;
	case 'C':return 2; break;
	case 'T':return 3; break;
	case 'G':return 4; break;
	}
}

long long cn(char a[15])
{
	long long s = 0; int p = 1;
	for (int i = 0; i < strlen(a); i++)
	{
		s += p * 5 * ci(a[i]); p *= 5;
	}
	return s;
}

bool search(char a[15])
{
	long long n = cn(a);
	long long ha;
	int i = 0;
	while (1)
	{
		ha = (n%M + i*(1 + n % (M - 1))) % M;
		if (T[ha][0] == '-')return false;
		else if (strcmp(T[ha] ,a)==0)return true;
		i++;
	}

}

void insert(char a[15])
{
	long long n = cn(a);
	long long ha;
	int i = 0;
	while (1)
	{
		ha = (n%M + i*(1 + n % (M - 1))) % M;
		if (strcmp(T[ha], a) == 0)return;
		else if (T[ha][0] == '-')
		{
			strcpy(T[ha], a);
			return;
		}
		i++;
	}
}

int main()
{
	int n;
	cin >> n;
	rep(i, M)T[i][0] = '-';
	rep(i, n)
	{
		char mis[7],a[15];
		scanf("%s %s", mis, a);
		if (mis[0] == 'i')
		{
			insert(a);
		}
		else
		{
			if (search(a))cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}

	return 0;
}