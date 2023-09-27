#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int m[n];
		for(int i = 0;i < n;i++) cin >> m[i];
		sort(m,m+n);
		cout << accumulate(m+1,m+n-1,0) / (n - 2) << endl;
	}
}