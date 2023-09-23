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
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
bool sosu(int a){
  if(a > 1000000){
	FOR(i,2,a/1000){
	  if(a%i==0) return false;
	}
  }else  if(a > 10000){
	FOR(i,2,a/100){
	  if(a%i==0) return false;
	}
  }else if(a > 100){
	FOR(i,2,a/10){
	  if(a%i==0) return false;
	}
  }else{
	if(a==1) return false;
	if(a==2) return true;
	FOR(i,2,a/2+1){
	  if(a%i==0) return false;
	}
  }
  return true;
}

int main(){

  while(1){
	int a,d,n;
	cin >> a >> d >> n;
	if(a==0&&d==0&&n==0) break;

	int c = 0;
	int now;
	now = a;

	while(1){
	  if(sosu(now)) c++;
	  if(c==n) break;
	  now += d;
	}

	cout << now << endl;

  }
}