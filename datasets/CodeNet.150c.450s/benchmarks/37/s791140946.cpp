#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
#include <algorithm>
#include<functional>
#include<cstdlib>
#include<cmath>


#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

typedef pair<int, int> P;
typedef pair<long, long> LP;
typedef pair<int, P> PP;
typedef pair<long, LP> LPP;



int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };

int A = 0, B = 0, K = 0, T = 0, W = 0, N = 0, H = 0;
int n = 0;
double L = 0;
double S = 0;
double ar = 0, br = 0, cr = 0;
int answer = 0;

string C;
string sA, strB;
vector<vector<char>> map;
vector<double> num;
vector<string> str;

int sum = 0;

vector<int> value;
vector<int> weight;

int dp[110][10010];

int data_[210][2] = { -2 };

void input(void) {

	return;
}


int main(void) {

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	double x = 0;
	double y = 0;

	while (scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF) {
		y = (double)(c * d - a * f) / (double)(b * d - a * e);
		x = (double)(c - b * y) / (double)a;
		printf("%.3f %.3f\n", x, y);
	}



	return 0;
}