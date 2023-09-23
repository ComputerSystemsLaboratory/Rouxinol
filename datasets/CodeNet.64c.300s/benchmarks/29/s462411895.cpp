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
#define REP(i,n) for(int i=0;i<=(int)(n);i++)
#define pb push_back 
#define pii pair<int,int>
#define mp make_pair
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int dou(int a){
  return a*a;
}

int tri(int a){
  return a*a*a;
}
 
int main(){

  while(1){
	double e;
	cin >> e;
	if(e==0) break;

	int x,y,z;

	int cb = cbrt(e+0.00001);
	
	int m = 1000000;

	REP(i,cb){
	  z = cb - i;
	  int huga = sqrt(e - tri(z)+0.000001);
	  REP(j,huga){
		y = huga - j;
		x = e - tri(z) - dou(y);
		if(m>(x+y+z)) m = x+y+z;
	  }
	}

	cout << m << endl;

	//	cout << z << endl;


  }
}