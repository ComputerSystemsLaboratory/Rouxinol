#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int N;
	cin >> N;
	vector<ll> cnt(N+1,0);

	for(int x = 1;x * x <= N;x++){
		for(int y = 1;y * y <= N;y++){
			for(int z = 1;z * z <= N;z++){
				int num = x * x + y * y + z * z + x * y + y * z + x * z;
				if(num <= N)cnt[num]++;
			}
		}
	}

	for(int i = 1;i <= N;i++)cout << cnt[i] << endl;
}
