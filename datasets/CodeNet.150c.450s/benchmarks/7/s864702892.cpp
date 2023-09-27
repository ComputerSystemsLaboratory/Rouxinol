#include <bits/stdc++.h>
#define LL long long
#define rep(i,n) for (int i=0;i<(n);i++)
//#define rep(i,x,n) for (int i=x;i<(n);i++)
using namespace std;
int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	vector<int> vc;
	while(cin >> n){
		vc.push_back(n);
	}
	sort(vc.begin(), vc.end(), greater<int>());
	rep(i, 3){
		cout << vc[i] << endl;
	}
	return 0;
}