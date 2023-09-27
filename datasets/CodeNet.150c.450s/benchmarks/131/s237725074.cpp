#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define EPS 1e-14

#define all(v) v.begin(),v.end()
#define INF 1<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
 
int L;
typedef long long ll;
int saisyou(int a[]){
	int res=0;
	for(int i=0;i<L;i++){
		res *= 10;
		res += a[i];
	}
	return res;
}
int saidai(int a[]){
	int res=0;
	for(int i=L;i>=0;i--){
		res *= 10;
		res += a[i];
	}
	return res;
}
int main(){
	while(1){
		int s[1000100];
		rep(i,1000100){
			s[i]=-1;
		}
		int a[6] = {0};

		int t ;
		cin >> t >> L;
		if(t==0&&L==0) break;
		s[t]=0;
		rep(i,L){
			a[i] = t%10;
			t/=10;
		}
		sort(a,a+L);
		int cnt = 1;
		while(1){
			t = saidai(a)-saisyou(a);
			// cout << saisyou(a) << endl;
			if(s[t]!=-1) break;
			else s[t] = cnt;
			rep(i,L){
				a[i] = t%10;
				t/=10;
				
			}
			sort(a,a+L);
			cnt++;
		}
		cout << s[t] << " " << t << " " << cnt-s[t] << endl;
	}
	return 0;
}