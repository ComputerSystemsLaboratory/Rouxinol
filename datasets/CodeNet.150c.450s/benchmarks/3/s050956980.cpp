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
	string str = "";
	string s = "";
	string t = "";
	int n = 0;
	int m = 0;
	int l = 0;
	cin >> str >> l;
	for(int j = 0; j < l; ++j){
		cin >> s >> n >> m;
		if(s == "replace"){
			cin >> t;
			str.replace(n, t.size(), t);
		}
		if(s == "print"){
			for (int i = n; i <= m; ++i)
			{
				cout << str[i];
			}
			cout << endl;
		}
		if(s == "reverse"){
			for (int i = 0; i <= m - n; ++i)
			{
				str.insert(n+i, 1, str[m]);
				str.erase(m+1, 1);
			}
		}
	}
}