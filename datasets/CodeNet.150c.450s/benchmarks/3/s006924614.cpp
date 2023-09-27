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
	string str;
	int n;
	cin >> str >> n;
	REP(i,n){
		string op,p;
		int a,b;
		cin >> op;
        if (op == "print") {
            cin >> a >> b;
            cout << str.substr(a, b-a+1) << endl;
        }
        if (op == "reverse") {
            cin >> a >> b;
            reverse(str.begin()+a,str.begin()+b+1);
        }
        if (op == "replace") {
            cin >> a >> b >> p;
            str.replace(str.begin()+a, str.begin()+b+1, p);
        }
	}
}