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

//????????????
//test?????£???wrong answer????????£??????

int ball[10];
bool can = false;

void search(int r,int l,int n){
  //  cout << n << endl;
  if(n>=10) {
	can = true;
	return;
  }
  if(r<ball[n]) search(ball[n],l,n+1);
  if(l<ball[n]) search(r,ball[n],n+1);

}
 
int main(){
  int n;
  cin >> n;
  REP(i,n){
	REP(i,10) cin >> ball[i];
	int right=0;
	int left=0;
	can = false;
	search(right,left,0);
	if(can) cout << "YES" << endl;
	else cout << "NO" << endl;
  }

}