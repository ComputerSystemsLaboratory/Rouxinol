#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int inf = 1e9;

int main(){
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int ans=-inf;
		for(int i=0; i<n; i++){
			int sum=0;
			for(int j=0; i+j<n; j++){
				sum += a[i+j];
				ans = max(ans, sum);
			}
		}
		cout << ans << endl;
	}
	return 0;
}