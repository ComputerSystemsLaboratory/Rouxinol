#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	int n,k;
	int a[100001];
	while(cin >> n >> k, n){
		int ans = 0;
		rep(i,n){
			cin>>a[i];
		}
		rep(i,k)ans += a[i];
		int sum = 0;
		int tmp = ans;
		for(int i = k; i < n; i++){
			sum = tmp;
			sum -= a[i-k];
			sum += a[i];
			ans = max(ans,sum);
			tmp = sum;
		}
		FIN(ans);
	}

	return 0;
}