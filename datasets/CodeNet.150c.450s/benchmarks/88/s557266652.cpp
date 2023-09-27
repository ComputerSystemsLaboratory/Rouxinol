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
	int h,w;
	vector<pair<int,pair<int,int> > > data;
	FOR(i,1,151){
		FOR(j,i+1,151){
			int tai = i*i+j*j;
			data.push_back(make_pair(tai,make_pair(i,j)));
		}
	}
	sort(All(data));
	while(1){
		cin >> h >> w;
		if(h==0&&w==0) break;
		REP(i,data.size()){
			if(data[i].first==h*h+w*w && data[i].second.first==h && data[i].second.second==w){
				cout << data[i+1].second.first << " "  << data[i+1].second.second << endl;
				i = data.size();
			}
		}
	}
}