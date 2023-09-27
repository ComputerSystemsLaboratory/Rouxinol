#include <iostream>

using namespace std;


int main(){
	int n;
	int q,b,c;
	long long ans = 0;
	long long num[100010] = {0};

	cin >> n;
	for(int i = 1; i <= n; i++){
		long long a;
		cin >> a;
		ans += a;
		num[a]++;
	}	

	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> b >> c;
		ans += (c - b) * num[b];
		num[c] += num[b];
		num[b] = 0;
		cout << ans << endl;	
	}
}
