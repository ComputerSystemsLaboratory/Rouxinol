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

int knum[50];

int main(){
	while(1){
		int n,p;
		cin >> n >> p;
		if(n==0&&p==0) break;
		REP(i,50) knum[i] = 0;
		int nowwan = p;
		int nowp = 0;
		int winner;
		while(1){
			if(nowwan==0){
				bool rst = true;
				REP(i,n) if(i!=nowp&&knum[i]!=0) rst = false;
				if(rst) {
					winner = nowp;
					break;
				}else{
					nowwan = knum[nowp];
					knum[nowp] = 0;
				}
			}else{
				nowwan--;
				knum[nowp]++;
			}
			if(nowp == n-1) nowp = 0;
			else nowp++;
		}
		cout << winner << endl;
	}
}