#include<iostream>
#include<algorithm>

using namespace std;

int n, x;
int main(){
	while(cin >> n, n){
		int mi = 1 << 30, ma = -1 << 30, res = 0;
		for(int i = 0;i < n;i++){
			cin >> x;
			res += x;
			mi = min(mi, x);
			ma = max(ma, x);
		}
		cout << (res - mi -ma) / (n - 2) << endl;
	}
	return 0;
}