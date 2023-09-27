#include <bits/stdc++.h>
#define LL long long
//#define rep(i,n) for (int i=0;i<(n);i++)
#define rep(i,x,n) for (int i=x;i<(n);i++)
using namespace std;
int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int a, b;
	
	while(cin >> a >> b){
		
		int sum = a+b;
		string res = to_string(sum);
		
		cout << res.size() << endl;
	
	}
	return 0;
}