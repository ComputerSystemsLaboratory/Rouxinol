#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int main() {
	int sum;
	while(cin >> sum, sum) {
		int cnt = 0;
		for(int n=2; n<=sum; n++) {
			int a = (sum*2/n - n + 1) / 2;
			if(a<=0) break;
			if( (2*a+n-1)*n/2 == sum ) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}