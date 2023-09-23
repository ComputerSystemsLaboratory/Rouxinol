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
	int data[100][100];
	int r,c;
	ll int sum;
	cin >> r >> c;
	REP(i,r) REP(j,c) cin >> data[i][j];
	REP(i,r){
		sum = 0;
		REP(j,c){
			cout << data[i][j] << " ";
			sum += data[i][j];
		}
		cout << sum << endl;
	}
	ll int sum2 = 0;
	REP(i,c){
		sum = 0;
		REP(j,r){
			sum += data[j][i];
		}
		sum2 += sum;
		cout << sum << " ";
	}
	cout << sum2 << endl;
}