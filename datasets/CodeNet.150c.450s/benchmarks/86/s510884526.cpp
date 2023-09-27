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
//wrong answer

int main(){

  while(1){

	int n,m;
	double p;
	int x[200];
	int ans;
	double sum=0;

	cin >> n >> m >> p;

	if(n==0&&m==0&&p==0)
	  break;

	m--;

	REP(i,n){
	  cin >> x[i];
	  sum += x[i];
	}

	sum = sum * 100;
	if(x[m]==0){
	  ans = 0;
	}else{
	  ans = sum * (100-p)/100 / x[m];
	}

	cout << ans <<endl;

  }

}