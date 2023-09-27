#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int gcd(int a, int b){
	if(a > b) swap(a,b);
	while(b > 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void solve(){
	int a, b;
	cin >> a;
	cin >> b;
	cout << gcd(a,b) << endl;

}

int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
	solve();
	return 0;
}