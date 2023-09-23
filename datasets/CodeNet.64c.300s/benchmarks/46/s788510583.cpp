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

#define maxnum 1000000
bool isprime[maxnum];

void makeprime(){
	REP(i,maxnum){
		if(i%2!=0) isprime[i] = true;
	}
	isprime[1] = false;
	isprime[2] = true;
	for(int i=3;i<sqrt(maxnum);i+=2){
		for(int j=i+2;j<maxnum;j+=2){
			if(j%i==0) isprime[j] = false;
		}
	}
}

int main(){
	int a,d,n;
	makeprime();
	while(1){
		cin >> a >> d >> n;
		if(a==0&&d==0&&n==0) break;
		ll int cnt = 0;
		ll int pos = a;
		while(1){
			if(isprime[pos]){
				cnt++;
			}
			if(cnt==n) break;
			pos+=d;
		}
		cout << pos << endl;
	}
	return 0;
}