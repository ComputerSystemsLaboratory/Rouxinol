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

int data[5][11];
int n;

void ShowaBan(){
	REP(i,n){
		REP(j,5){
			cout << data[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int solve(){
	int res = 0;
	REP(i,n){
		int lt = 2;
		int rt = 2;
		while(lt>=0){
			if(data[lt][i]==data[2][i]) lt--;
			else {
				lt++;
				break;
			}
		}
		while(rt<=4){
			if(data[rt][i]==data[2][i]) rt++;
			else {
				rt--;
				break;
			}
		}
		if(rt==5) rt=4;
		if(lt==-1) lt = 0;
		int num = rt-lt+1;
		if(num>=3){
			res += num*data[2][i];
			FOR(j,lt,rt+1){
				data[j][i]=-1;
			}
		}
	}

	//ShowaBan();
	REP(j,5){
		queue<int> qt;
		for(int i=n-1;i>-1;i--){
			if(data[j][i]!=-1) qt.push(data[j][i]);
		}
		REP(i,11) data[j][i] = 0;
		int t = n-1;
		while(!qt.empty()){
			data[j][t] = qt.front();
			qt.pop();
			t--;
		}

	}

	//ShowaBan();
	return res;
}
int main(){

	while(1){
		cin >> n;
		if(n==0) break;
		REP(i,5)REP(j,11) data[i][j] = 0;
		REP(i,n)REP(j,5) cin >> data[j][i];
		ll int ans = 0;
		while(1){
			int tmp = solve();
			if(tmp<=0) break;
			ans += tmp;
		}
		cout << ans << endl;
	}
}