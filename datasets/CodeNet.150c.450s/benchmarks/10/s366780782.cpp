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

int data[10][3][4];
int main(){
	REP(i,10) REP(j,3) REP(k,4) data[i][j][k] = 0;
	int n;
	cin >> n;
	REP(i,n){
		int b,f,r,v;
		cin >> b >> f >> r >> v;
		data[r-1][f-1][b-1]+=v;
	}
	REP(j,4){
		REP(k,3){
			REP(h,10) {
				cout << " " << data[h][k][j];
			}
			cout << endl;
		}

		if(j!=3) cout << "####################" << endl;
	}
}