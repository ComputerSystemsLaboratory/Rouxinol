#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
	int n;
	while(cin >> n && n!=0)
	{
			vector<int> a(n);
			for(int i=0;i<n;i++)
					cin >> a[i];

			sort(a.begin(),a.end());
			int sa;
			int ans = INT_MAX;
			for(int i=1;i<n;i++){
					sa  = a[i] - a[i-1];
					if(ans > sa){
							ans = sa;
					}
			}
			cout << ans << endl;
	}
}
