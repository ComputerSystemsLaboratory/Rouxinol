#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n , n){
		vector<int> v(n);
		for(int i=0;i<n;++i){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		int sum=0;
		for(int i=1;i<n-1;++i){
			sum+=v[i];
		}
		cout << floor((double)sum/(n-2)) << endl;
	}
	return 0;
}