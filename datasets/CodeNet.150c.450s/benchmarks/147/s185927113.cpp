#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	int n;
	cin>>n;

	for(int i = 1; i <= n;i++){
		int cnt = 0;

		for(int x = 1; x * x < i; x++) {
			for(int y = 1; y * y < i; y++) {
				int req = i - x*x - y*y - x * y;
				if(req > 0) {
					int low = 1;
					int high = i;
					while(low <= high) {
						int mid = low + (high - low) /2;
						int cal = mid * mid + (x + y) * mid;
						if(cal == req)
							{cnt++; break;}
						else if(cal > req) {
							high = mid - 1;
						} else {
							low = mid + 1;
						}
					}
				}
			}
		}

		cout<<cnt<<"\n";
	}
	return 0;
}