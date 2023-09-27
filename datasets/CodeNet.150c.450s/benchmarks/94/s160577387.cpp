#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(void){
	int n; cin >> n;
	vector<int> v(n);
	rep(i, n) cin >> v[i];

	int ans = 0;
	while(1){
		int f = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			if(v[i] > v[i + 1]){
				swap(v[i], v[i + 1]);
				ans++;
				f = 1;
			}
		}
		if(f == 0) break;
	}
	
	rep(i, v.size() - 1){
		cout << v[i] << " ";
	}
	cout << v[n - 1] << endl;
	cout << ans << endl;
	return 0;
}