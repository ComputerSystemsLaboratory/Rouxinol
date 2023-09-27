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
	//cin >> str; ?????????????????????????????§???????????????
	getline(cin,str);
	REP(i,str.size()){
		/*
		??¢???????????????'A'-'Z' < 'a' -'z'??¨????????? 'Z'??¨'a'?????????????¨?????????????
		http://www.asciitable.com/
		*/
		if('A'<=str[i]&&str[i]<='Z') cout << (char)(str[i]+'a'-'A');
		else if('a'<=str[i]&&str[i]<='z') cout << (char)(str[i]-('a'-'A'));
		else cout << str[i];
	}
	cout << endl;
}