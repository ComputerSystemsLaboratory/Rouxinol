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

  while(cin>>n,n){
	int ans=0;
	FOR(i,1,n/2+1){
	  FOR(j,1,n/2+1){
		if((i+i+j)*(j+1)/2 == n )
		  //cout << i <<endl << j<< endl;//
		  ans++;
	  }
	}

	cout << ans << endl;

  }

}