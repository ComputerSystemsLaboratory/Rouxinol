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
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	int m;
	cin >> m;
	REP(i,m){
		map<string,int> data;
		string in;
		cin >> in;
		FOR(i,1,in.size()){
			string s1 = in.substr(0,i);
			string s2 = in.substr(i);
			//cout << s1 << " " << s2 << endl;
			string s3 = s1;
			reverse(All(s3));
			string s4 = s2;
			reverse(All(s4));
			data[s1+s2]++;
			data[s1+s4]++;
			data[s2+s1]++;
			data[s2+s3]++;
			data[s3+s2]++;
			data[s3+s4]++;
			data[s4+s1]++;
			data[s4+s3]++;
		}
		cout << data.size() << endl;
	}
}