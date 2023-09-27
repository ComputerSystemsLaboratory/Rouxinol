#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	vector<int> ans;
	int n;
	cin >> n;
	cout << n << ": ";
	for (int i = 2; i <= sqrt(n)+1; i++){
		if (n == 1) break;
		while (1){
			if (n % i == 0){
				n /= i;
				ans.push_back(i);
			} else {
				break;
			}
		}
	}
	if (n != 1) ans.push_back(n);
	for (int i = 0; i < (int)ans.size(); i++){
		if (i == (int)ans.size()-1) cout << ans[i] << endl;
		else cout << ans[i] << " ";
	}
}


