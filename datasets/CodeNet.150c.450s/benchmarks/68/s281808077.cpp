#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	while(1){
		int n; cin >> n;
		if (n == 0) break;
		int mind = 1000001;
		vector<int> v(n);
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		for (int i = 0; i < n -1; i++){
			mind = min(mind , v[i+1] - v[i]);
		}
		cout << mind << endl;
	}
return 0;
}