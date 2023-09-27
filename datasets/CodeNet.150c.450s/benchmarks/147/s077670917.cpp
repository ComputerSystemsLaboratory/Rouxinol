#include <iostream>
using namespace std;

int main() {

	int n; cin >> n;

	int ans[10001] =  {0};

	for(int x = 1; x <= 100; x ++)
		for(int y = 1; y <= 100; y ++)
			for(int z = 1; z <= 100; z ++) {

				int v = x * x + y * y + z * z + x * y + y * z + z * x;

				if(v <= 10000)
					ans[v] ++;
			}

	for(int i = 1; i <= n; i ++)
		printf("%d\n", ans[i]);
}