#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <list>
#include <stack>
#include <queue>
#define INF 1000000
using namespace std;

typedef list<int> L;
typedef pair <int,int> P;
typedef vector<int> V;
typedef queue<int> Q;
typedef stack<int> S;
typedef map<string,int> M;

int N;
int dp[1000001];
int dp2[1000001];
int tetra[1000];

int main()
{
    for (int i = 0; i <= INF; i++) {dp[i] = INF;dp2[i] = INF;}
    int n = 1;
    int tmp;
    while ((tmp = (n * (n + 1) * (n + 2) / 6)) <= 1000000) {
        tetra[n++] = tmp;
        dp[tmp] = 1;
        if (tmp % 2) dp2[tmp] = 1;
    }
    int max = 1;
    while (cin >> N, N) {
        if (max > N) {
            cout <<  dp[N] << " ";
        } else {
            for (int i = max; i <= N; i++) {
                for (int j = 1; tetra[j] <= i; j++) {
                    dp[i] = min(dp[i], dp[i - tetra[j]] + 1);
                }
            }
            cout << dp[N] << " ";
        }

        if (max > N) {
            cout << dp2[N] << endl;
        } else {
            for (int i = max; i <= N; i++) {
                for (int j = 1; tetra[j] <= i; j++) {
                    if (tetra[j] % 2)
                        dp2[i] = min(dp2[i], dp2[i - tetra[j]] + 1);
                }
            }
            cout << dp2[N] << endl;
            max = N;
        }
    }

    return 0;
}