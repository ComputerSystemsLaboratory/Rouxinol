#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n, r, p, c, cd[55];
	while(cin >>n >>r, n!=0 || r!=0){
		iota(cd,cd+55,1);
		while(r--){
			cin >> p>>c;
			rotate(cd+(n-p-c+1),cd+(n-p+1),cd+n);
			//rep(i,n) printf("%d ",cd[i]); puts("");
		}
		cout << cd[n-1] <<endl;
	}

}