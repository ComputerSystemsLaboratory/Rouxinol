#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >>n,n){
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		int mini = INT_MAX;
		int idx;
		for(int i=0;i<n-1;i++){
			mini = min(mini,abs(a[i]-a[i+1]));
		}
		cout << mini<<endl;
	}
	
	return 0;
}