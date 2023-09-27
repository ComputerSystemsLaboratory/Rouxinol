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

int ls = 0;//yuka
int rs = 0;

int main(){
	while(1){
		ll int cnt = 0;
		int n;
		cin >> n;
		if(n==0) break;
		string old ="";
		REP(i,n){
			string tmp;
			cin >> tmp;
			if((tmp=="lu"&&old=="ru")||(tmp=="ru"&&old=="lu")) cnt++;
			if((tmp=="ld"&&old=="rd")||(tmp=="rd"&&old=="ld")) cnt++;
			old = tmp;
		}
		cout << cnt << endl;
	}
}