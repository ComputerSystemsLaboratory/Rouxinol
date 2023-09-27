#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

double distanceAB(double xa, double ya, double xb, double yb);
void trace(int A[], int N);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/


#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int getChar(char ch)
{
	if (ch == 'A') return 1;
	else if (ch == 'C') return 2;
	else if (ch == 'G') return 3;
	else if (ch == 'T') return 4;
	else return 0;
}

long long getKey(char str[])
{
	long long sum = 0, p = 1, i;
	for (i=0; i<strlen(str); i++)
	{
		sum += p * (getChar(str[i]));
		p *= 5;
	}
	return sum;
}

int h1(int key)
{
	return key % M;
}

int h2(int key)
{
	return 1 + (key % (M - 1));
}

int find(char str[])
{
	long long key, i, h;
	key = getKey(str);
	for (i=0; ; i++)
	{
		h = (h1(key) + i * h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0) return 0;
	}
	return 0;
}

int insert(char str[])
{
	long long key, i, h;
	key = getKey(str);
	for (i=0; ; i++)
	{
		h = (h1(key) + i * h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0)
		{
			strcpy(H[h], str);
			return 0;
		}
	}
	return 0;
}


int main()
{
	int i, n, h;
	char str[L], com[9];
	for (i=0; i<M; i++) H[i][0] = '\0';
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%s %s", com, str);
		
		if (com[0] == 'i')
		{
			insert(str);
		} else {
			if (find(str))
			{
				printf("yes\n");
			} else {
				printf("no\n");
			}
		}
	}
	
	return 0;
}


void trace(int A[], int N)
{
	REP(N)
	{
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}


double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}