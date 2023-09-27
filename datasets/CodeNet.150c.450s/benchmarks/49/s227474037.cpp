#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int main() {
	int c[20];   // int[] c = new int[20];
	int w = 0;
	while (true)
	{
		int a;
		cin >>  a;// int a = int.Parse(Console.ReadLine());
		if (a == 0)
			break;
		int sum = 0;
		int b[a];
		for (int j = 0; j < a; j++)
		{
			cin >> b[j];
			sum += b[j];
		}
		int maxi = 0,mini = 1000000000;
		for (int j = 0; j < a; j++) {
			if (maxi < b[j])
				maxi = b[j];
			if (mini > b[j])
				mini = b[j];
		}
		sum -= maxi + mini;
		c[w] = (sum / (a - 2));
		w++;
	}
	for (int j = 0; j<w; j++)
	{
		cout << c[j] << endl;
	}
}