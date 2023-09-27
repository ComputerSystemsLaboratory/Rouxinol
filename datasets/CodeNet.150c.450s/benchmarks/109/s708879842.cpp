#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;

int main() 
{
	int n;
	while(cin>>n&&n!=0){
		int a[86400]={};
		for(int i=0;i<n;i++){
			string s,t;
			cin>>s;
			int from= ((s[0]-'0')*10+ (s[1]-'0'))*3600
					+ ((s[3]-'0')*10+ (s[4]-'0'))*60
					+ ((s[6]-'0')*10+ (s[7]-'0'));
			cin>>t;
			int to= ((t[0]-'0')*10+ (t[1]-'0'))*3600
					+ ((t[3]-'0')*10+ (t[4]-'0'))*60
					+ ((t[6]-'0')*10+ (t[7]-'0'));
			for(int j=from;j<to;j++){
				a[j]++;
			}
		}
		
		sort(a,a+86400);
		cout<<a[86399]<<endl;
		
	}
	return 0;
}