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
	int S[13],H[13],C[13],D[13];
	REP(i,13){
		S[i]=H[i]=C[i]=D[i]=0;
	}
	int n;
	cin >> n;
	REP(i,n){
		char p;
		int number;
		cin >> p >> number;
		if(p=='S') S[number-1]=1;
		else if(p=='H') H[number-1]=1;
		else if(p=='C') C[number-1]=1;
		else if(p=='D') D[number-1]=1;
	}
	REP(i,13) if(S[i]==0) cout << "S " << i+1 << endl;
	REP(i,13) if(H[i]==0) cout << "H " << i+1 << endl;
	REP(i,13) if(C[i]==0) cout << "C " << i+1 << endl;
	REP(i,13) if(D[i]==0) cout << "D " << i+1 << endl;

}