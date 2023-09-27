#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long int f[45];
	int n; cin >> n;

	f[0] = 1; f[1] = 1;
	for(int i=2;i<=n;i++) f[i] = f[i-1] + f[i-2];

	cout << f[n] << "\n";

	return 0;
}
