#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int n,m,p;

int main(){
	while(1){
		cin >> n >> m >> p;
		if(n==0&&m==0&&p==0) break;
		int sum = 0;
		int waru;
		REP(i,n){
			int tmp;
			cin >> tmp;
			if(i==m-1) waru = tmp;
			sum += tmp;
		}
		if(waru==0) cout << 0 << endl;
		else cout << sum*100*(100-p)/100/waru << endl;
	}
}