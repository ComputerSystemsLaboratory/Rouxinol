#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
using namespace std;

typedef long long ll;
bool debug = false;
const int NIL = -1;
const int INF = 1000000000;
const int NUM = 1010;
clock_t START, END;
int T[NUM][NUM];

int main(void)
{
	if (debug) {
		START = clock();
		freopen("in29.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	};
	int f;
	string s1, s2;
	cin >> s1 >> s2;
	int l1 = s1.size(), l2 = s2.size();
	for (int i = 0; i <= l1; i++)
		T[0][i] = i;
	for (int i = 0; i <= l2; i++)
		T[i][0] = i;
	for (int i = 1; i <= l2; i++) {
		for (int j = 1; j <= l1; j++) {
			if (s1[j - 1] == s2[i - 1])
				f = 0;
			else
				f = 1;
			T[i][j] = min(T[i - 1][j] + 1, min(T[i][j - 1] + 1, T[i - 1][j - 1] + f));
		}
	}
	cout << T[l2][l1] << endl;
	if (debug) {
		END = clock();
		double endtime = (double)(END - START) / 1000;
		printf("total time = %lf s", endtime);
	}
	return 0;
}
