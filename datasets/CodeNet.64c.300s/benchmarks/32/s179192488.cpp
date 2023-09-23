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
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	int n;
	ll int sum = 0;
	ll int saidai = -9000000;
	ll int saishou = 9000000;
	cin >> n;
	REP(i,n){
		ll int tmp;
		cin >> tmp;
		sum += tmp;
		saidai = max(saidai,tmp);
		saishou = min(saishou,tmp);
	}
	cout << saishou << " " << saidai << " " << sum << endl;
}