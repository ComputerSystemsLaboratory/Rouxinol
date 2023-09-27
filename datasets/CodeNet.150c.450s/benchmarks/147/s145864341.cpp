#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		int ans = 0;
		for (int x = 1; x * x + x <= i; x++)
			for (int y = 1; x * x + y * y + x * y + y + x + 1 <= i; y++)
				for (int z = 1; x * x + y * y + z * z + x * (y + z) + y * z <= i; z++)
					if (x * x + y * y + z * z + x * (y + z) + y * z == i){
						ans += 1;
						break;
					}
		cout << ans << '\n';
	}
	return 0;
}
