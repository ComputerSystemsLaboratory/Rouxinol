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

int n,s;
int c;

void search(int a,int sum,int before){
  FOR(i,before,10){
	if(sum+i>s) continue;
	if(a<n) search(a+1,sum+i,i+1);
	else if(sum+i==s) {
	  //	  	  cout << i <<" " << sum << " " << before-1 << endl;
	  c++;
	}
  }
}

 
int main(){
  while(1){
	cin >> n >> s;
	c = 0;
	if(n==0&&s==0) break;
	search(1,0,0);

	cout << c << endl;

  }
}