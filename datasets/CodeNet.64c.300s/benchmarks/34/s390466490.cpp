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
	int data[101];
	int n;
	cin >> n;
	REP(i,n) cin >> data[i];
	REP(i,n){
		if(i!=n-1) cout << data[i] << " ";
		else cout << data[i] << endl;
	}
	REP(i,n-1){
		int pv = data[i+1];//????????????
		bool isin = false;
		int j = 0;
		while(1){
			if(j==i+1||isin==true) break;
			if(data[j]>pv){
				//?????????
				for(int k=i+1;k>=j; k--) data[k] = data[k-1];
				data[j] = pv;
				isin = true;
			}
			j++;
		}
		REP(j,n){
			if(j!=n-1) cout << data[j] << " ";
			else cout << data[j] << endl;
		}
	}
}