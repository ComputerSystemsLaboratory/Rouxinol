#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
	while(true) {
		int n, m;
		cin>>n>>m;
		if(n == 0 && m == 0) break;
		vector<int> s1(n);
		vector<int> s2(m);
		int sum1 = 0;
		int sum2 = 0;
		REP(i, n) {
			cin>>s1[i];
			sum1 +=s1[i];
		}
		REP(i, m) {
			cin>>s2[i];
			sum2 += s2[i];
		}
		int a = -1;
		int b = -1;
		int ansum = INF;
		if((sum1 - sum2) % 2 != 0) {
			cout<<-1<<endl;
			continue;
		}
		REP(i, n) {
			REP(j, m) {
				if(s1[i] - s2[j] == (sum1 - sum2) / 2 && s1[i] + s2[j] < ansum) {
					a = s1[i];
					b = s2[j];
					ansum = a + b;
				}
			}
		}
		if(ansum != INF) cout<<a<<" "<<b<<endl;
		else cout<<-1<<endl;
	}
}