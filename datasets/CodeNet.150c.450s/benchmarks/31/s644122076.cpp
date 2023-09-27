#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int main(){
	int xm,n,ans=numeric_limits<int>::min();
	cin >> n;
	cin >> xm;
	for(int i=1;i<n;i++){
		int r;
		cin >> r;
		ans = max(ans,r-xm);
		xm = min(xm,r);
	}
	cout << ans << endl;
	return 0;
}