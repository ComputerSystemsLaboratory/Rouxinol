#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
while(1){	
	
	int n;
	cin >> n;
	if(n == 0) break;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	
	sort(v.begin(), v.end());
	
	int ans = 99999999;
	for(int i=0; i<n-1; i++){
		ans = min(ans, abs(v[i] - v[i+1]));
	}
	
	cout << ans << endl;
	v.clear();
	
}//end	
	
	return 0;
}
