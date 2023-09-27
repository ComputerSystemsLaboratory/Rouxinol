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

#define intmax 1299710
int isprime[intmax];
void makeprime(){
	REP(i,intmax) if(i%2!=0) isprime[i] = true;
	isprime[1] = false;
	isprime[2] = true;
	for(ll int i=3;i<sqrt(intmax);i+=2){
		for(ll int j=i+2;j<intmax;j+=2){
			if(j%i==0) isprime[j] = false;
		}
	}
}
int main(){
	int cnt = 0;
	int n;
	cin >> n;
	REP(i,n){
		ll int tmp;
		cin >> tmp;
		if(tmp==1) continue;
		if(tmp==2||tmp==3){
			cnt++;
			continue;
		}
		if(tmp%2==0) continue;
		bool flag = true;
		for(ll int j=3;j<sqrt(tmp)+1;j+=2){
			if(tmp%j==0){
				flag = false;
			}
		}
		if(flag) cnt++;
	}
	cout << cnt << endl;
}