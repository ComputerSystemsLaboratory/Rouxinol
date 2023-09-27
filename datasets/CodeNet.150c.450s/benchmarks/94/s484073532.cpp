#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(void){
	int n; cin >> n;
	vector<int> v(n);
	rep(i, n) cin >> v[i];

	int ans = 0;
	for (int i = n - 2; i >= 0; --i){
		for (int j = 0; j <= i; ++j){
			if(v[j] > v[j + 1]){
				swap(v[j], v[j + 1]);
				ans++;
			}
		}
	}
	rep(i, v.size() - 1){
		cout << v[i] << " ";
	}
	cout << v[n - 1] << endl;
	cout << ans << endl;
	return 0;
}