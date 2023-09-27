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


int main(){
	int x;
	while(cin >> x,x){
		int num = 2;
		ll int cnt = 0;
		while(1){
			if((x-((num)*(num-1)/2)) <= 0) break;
			if((x-((num)*(num-1)/2))%num == 0) {
				if(x!=1) cnt++;
			}
			num++;
		}
		cout << cnt << endl;
	}
}