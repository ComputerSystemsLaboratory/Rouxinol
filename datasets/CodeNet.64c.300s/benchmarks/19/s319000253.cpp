#include <iostream>
#include <algorithm>
using namespace std;

int a[5001];
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	while(cin >> n && n != 0){
		a[0] = 0;
		for(int i = 1; i <= n; ++i){
			cin >> a[i];
			a[i] += a[i - 1];
		}

		int m = -100000;
		for(int i = 1; i <= n; ++i){
			for(int j = 0; j < i; ++j){
				m = max(m, a[i] - a[j]);
			}
		}

		std::cout << m << std::endl;
	}

	return 0;
}