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
	/*string?????§?°?????????§????????????????????????*/
	int n;
	cin >> n;
	int a = 0,b = 0;
	REP(i,n){
		string sa,sb;
		cin >> sa >> sb;
		if(sa==sb){
			a++; b++;
		}else if(sa < sb){
			b+=3;
		}else if(sa > sb){
			a+=3;
		}
	}
	cout << a << " " << b << endl;
}