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
	int a[3];
	REP(i,3) cin >> a[i];/*cin >> a[0] >> a[1] >> a[2]*/
	//sort(a,a+3);
	if(a[1]>a[2]) swap(a[1],a[2]);/*??\?????????*/
	if(a[0]>a[1]) swap(a[0],a[1]);
	if(a[1]>a[2]) swap(a[1],a[2]);
	cout << a[0] << " " << a[1] << " " << a[2] << endl;
}