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
 
int main(){

  while(1){
	int n = 0;

	cin >> n;

	if(n==0) break;

	int ans = 0;
	string shoukou[100];

	REP(i,n) cin >> shoukou[i];

	bool right = true; // down = true
	bool left  = true; // up = false

	bool down = true;

	REP(i,n){
	  if(shoukou[i]=="lu")
		left = false;
	  else if(shoukou[i]=="ru")
		right = false;
	  else if(shoukou[i]=="ld")
		left = true;
	  else if(shoukou[i]=="rd")
		right = true;
	  if(right == left && down != right){
		ans ++;
		down = not(down);
	  }
}

	cout << ans << endl;
  }
}