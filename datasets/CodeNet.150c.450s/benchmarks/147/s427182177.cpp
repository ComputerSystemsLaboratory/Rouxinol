#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int N;
	cin >> N;
	for(int n = 1;n <= N;n++){
		ll cnt = 0;
		for(int x = 1;x * x <= n;x++){
			for(int y = 1;y <= n - x * x && y <= x;y++){
				for(int z = 1;z <= n - x * x - y * y && z <= y;z++){
					if(x * x + y * y + z * z + x * y + y * z + z * x == n){
						if(x == y && y == z)cnt++;
						else if(x != y && y != z)cnt += 6;
						else if(x != y || y != z)cnt += 3;
					}
				}
			}
		}
		cout << cnt << endl;
	}
}
