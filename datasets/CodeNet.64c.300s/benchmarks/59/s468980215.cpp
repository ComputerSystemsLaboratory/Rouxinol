#include<bits/stdc++.h>
using namespace std;

int n, ans = 0;

bool solve (int x)
{
	for(int i = 2; i <= sqrt(x); i++) if(!(x % i)) return false;
	return true;
}
	
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(solve(x)) ans++;
	}
	cout << ans << endl;
	return 0;
}