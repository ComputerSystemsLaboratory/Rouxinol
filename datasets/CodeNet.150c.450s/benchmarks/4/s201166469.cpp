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
	int m,f,r;
	while(1){
		cin >> m >> f >> r;
		if(m==-1&&f==-1&&r==-1) break;
		if(m==-1||f==-1) cout << "F" << endl;
		else if(m+f>=80) cout << "A" << endl;
		else if(65<=m+f&&m+f<80) cout << "B" << endl;
		else if(50<=m+f&&m+f<65) cout << "C" << endl;
		else if(30<=m+f&&m+f<50&&r<50) cout << "D" << endl;
		else if(30<=m+f&&m+f<50&&r>=50) cout << "C" << endl;
		else if(m+f<30) cout << "F" << endl;
	}
}