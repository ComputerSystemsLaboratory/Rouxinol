/*#include<stdio.h>
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

void input() {
	CI N >> W;

	int temp;

	for (int i = 0; i < N;i++) {
		CI temp;
		value.push_back(temp);
		CI temp;
		weight.push_back(temp);
	}


	return;
}


int main(void) {
	input();

	for (int i = 0; i < N;i++) {
		for (int j = 0; j <= W;j++) {
			dp[i + 1][j] = max(dp[i + 1][j], value[i] + dp[i][j - weight[i]]);
		}
	}

	CO dp[N][W] E


	return 0;
}
*/

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


double tempd = 0.0;

int first;
int second;
int third;

int mountain;

void input() {
	

	return;
}

int main(void) {
	for (int i = 0; i < 10; i++) {
		CI mountain;
		if (mountain >= first) {
			third = second;
			second = first;
			first = mountain;
		}
		else {
			if (mountain >= second) {
				third = second;
				second = mountain;
			}
			else {
				if (mountain > third) {
					third = mountain;
				}
			}
		}
	}

	CO first E
	CO second E
	CO third E

	return 0;
}