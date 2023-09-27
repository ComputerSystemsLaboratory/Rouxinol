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

vector<string> nlist;
bool isinclude(string tmp){
	REP(i,nlist.size()){
		if(nlist[i]==tmp) return true;
	}
	return false;
}
int main(){
	int n;
	cin >> n;
	REP(i,n){
		string tmp;
		cin >> tmp;
		nlist.pb(tmp);
	}
	int nows = 0;
	cin >> n;
	REP(i,n){
		string tmp;
		cin >> tmp;
		if(isinclude(tmp)){
			if(nows == 1){
				cout << "Closed by " << tmp << endl;
			}else{
				cout << "Opened by " << tmp << endl;
			}
			nows = 1 - nows;
		}else{
			cout << "Unknown " << tmp << endl; 
		}
	}
	return 0;
}