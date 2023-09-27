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

int main(){
	int n;
	int mmax = -1;
	int mmin = 10000;
	int tmp;
	ll int sum;
	while(cin >> n,n){
		mmax = -1;
		mmin = 10000;
		sum = 0;
		REP(i,n){
			cin >> tmp;
			mmax = max(tmp,mmax);
			mmin = min(tmp,mmin);
			sum += tmp;
		}
		cout << (int)((sum-mmax-mmin)/(n-2)) << endl;
	}
}