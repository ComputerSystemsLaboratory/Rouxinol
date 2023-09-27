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

  int tensu[200];

  while(cin>>n,n){
	//cout << n << endl;//
	int max = 0;
	int min = 1000;
	int sum=0;
	REP(i,n){
	  cin >> tensu[n];
	  sum+=tensu[n];
	  if(max<tensu[n])
		max=tensu[n];
	  if(min>tensu[n])
		min=tensu[n];
	}

	//cout<<min<<endl<<max<<endl<<sum<<endl;//

	cout << (sum-max-min)/(n-2) << endl;

  }

}