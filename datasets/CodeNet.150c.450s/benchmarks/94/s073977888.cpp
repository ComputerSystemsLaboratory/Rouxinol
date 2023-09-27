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
	int data[100];
	ll int cnt = 0;
	int n;
	cin >> n;
	REP(i,n) cin >> data[i];
	for(int i=n-2;i>-1;i--){
		REP(j,i+1){
			if(data[j]>data[j+1]) {
				swap(data[j+1],data[j]);
				cnt++;
			}
		}
	}
	REP(i,n){
		if(i!=n-1) cout << data[i] << " ";
		else cout << data[i] << endl;
	}
	cout << cnt << endl;
}