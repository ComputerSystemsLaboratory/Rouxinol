#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

	int n,x;
	int ans;

	while (1){
		ans = 0;
		cin >> n >> x;
		if (n == 0 && x == 0 ) break;

		for (int i = 1; i <= n; i++){
			for (int j = i + 1; j <= n; j++){
				for (int k = j + 1; k <= n; k++){
					if ((i + j + k) == x) ans++;
					else if ((i + j + k) > x) break;
				}
			}
		}

		cout << ans << endl;
	}



	return 0;
}