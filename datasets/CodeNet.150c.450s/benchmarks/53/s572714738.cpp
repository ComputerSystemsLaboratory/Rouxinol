#include<bits/stdc++.h>
using namespace std;

typedef long long llint;
typedef long double ld;
#define inf 1e18
#define mod 1000000007
priority_queue<llint,vector<llint>,greater<llint> > que;
priority_queue<llint> q;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<llint> make_divisors(llint x){
	vector<llint>div;
	llint t=x;
	for(llint i=2;i*i<=x;i++){
		while(t%i==0){
			div.push_back(i);
			t/=i;
		}
	}
	if(t!=1)div.push_back(t);
	return div;
}

void solve(){
	llint n;
	cin >> n;
	vector<llint>div;
	div=make_divisors(n);
	cout << n << ":";
	for(int i=0;i<div.size();i++){
		cout << " " << div[i];
	}
	cout << endl;
}

int main(int argc, char *argv[]) {
  solve();
  return 0;
}

