#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)

void slove(int n){
	vector<int> v(86410);
	rep(i, 86410) v[i] = 0;//?????????
	rep(i, n){
		string s, e;
		cin >> s >> e;
		//?§???°?????????
		int start = 36000 * (s[0] - '0') + 3600 * (s[1] - '0') 
					+ 600 * (s[3] - '0') + 60 * (s[4] - '0')
					+ 10 * (s[6] - '0') + 1 * (s[7] - '0');
		int end = 36000 * (e[0] - '0') + 3600 * (e[1] - '0') 
					+ 600 * (e[3] - '0') + 60 * (e[4] - '0')
					+ 10 * (e[6] - '0') + 1 * (e[7] - '0');
		
		v[start]++;
		v[end]--;
	}
	int ans = 0;
	int now = 0;
	reps(i, 1, 86410){
		v[i] += v[i - 1];
		//now += v[i];
		ans = max(ans, v[i]);
	}
	printf("%d\n", ans);
}
int main(void){
	rep(i, 1000000){
		int n; scanf("%d", &n);
		if(n == 0) break;
		slove(n);
	}
	return 0;
}