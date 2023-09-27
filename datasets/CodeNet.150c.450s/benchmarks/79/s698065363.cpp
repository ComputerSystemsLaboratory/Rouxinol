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

int main(){
	int n,r;
	int data[100];
	while(1){
		cin >> n >> r;
		if(n==0&&r==0) break;
		REP(i,100) data[i] = n-i+1;
		REP(i,r){
			int p,c;
			cin >> p >> c;
			int newdata[100];
			REP(j,c){
				newdata[j+1] = data[p+j];
			}
			REP(j,p){
				newdata[j+c+1] = data[j+1];
			}
			FOR(j,p+c,n+1){
				newdata[j] = data[j];
			}
			REP(i,100) data[i] = newdata[i];
		}
		cout << data[1] << endl;
	}
}