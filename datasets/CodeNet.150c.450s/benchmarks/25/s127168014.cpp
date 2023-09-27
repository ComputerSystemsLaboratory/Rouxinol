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
	string s,r;
	int x[26] = {0};
	char a = 'a';
	do{
		getline(cin,r);
		s += r;
	}while(r != "");
	REP(i,s.length()){
		REP(j,26){
			if((int)(s[i] - 'a') == j || (int)(s[i] - 'A') == j){
				x[j]++;
			}
		}
	}
	REP(i,26){
		cout << (char)(a + i) << " : " << x[i] << endl; 
	}
}