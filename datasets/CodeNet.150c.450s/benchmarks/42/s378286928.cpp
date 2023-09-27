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

queue<pair<string,int> > Q;
int n;
int quantum;
int main(){
	int n;
	cin >> n >> quantum;
	REP(i,n){
		string tmpstr;
		int tmptime;
		cin >> tmpstr >> tmptime;
		Q.push(make_pair(tmpstr,tmptime));
	}
	ll int nowtime = 0;
	while(!Q.empty()){
		int tmp = Q.front().second;
		if(tmp<=quantum){
			nowtime+=tmp;
			cout << Q.front().first << " " << nowtime << endl;
			Q.pop();
		}else{
			nowtime+=quantum;
			Q.push(make_pair(Q.front().first,tmp-quantum));
			Q.pop();
		}
	}

}