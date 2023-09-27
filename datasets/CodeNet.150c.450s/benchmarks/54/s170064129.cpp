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

string to_small(string str){
	string rst = "";
	REP(i,str.size()){
		if('A'<=str[i]&&str[i]<='Z') rst += str[i] + ('a'-'A');
		else rst += str[i];
	}
	return rst;
}
int main(){
	string word;
	cin >> word;
	word = to_small(word);
	ll int cnt = 0;
	while(1){
		string s;
		cin >> s;
		if(s=="END_OF_TEXT") break;
		s = to_small(s);
		if(s==word) cnt++;
	}
	cout << cnt << endl;
}