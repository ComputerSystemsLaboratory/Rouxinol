#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int> > v;

int main(){
while(1){//start
	string s, t;
	int n;
	cin >> n;
	if(n == 0) break;

	for(int i = 0; i < n; i++){
		cin >> s >> t;
		v.push_back(make_pair(s, 1));
		v.push_back(make_pair(t, 0));
	}

	sort(v.begin(), v.end());

	int stock = 1;
	int ans = 1;

	for(int i = 0; i < (int)v.size(); i++){
		if(v[i].second){
			if(stock - 1 < 0) ans += 1;
			else stock -= 1;
		}
		else{
			stock += 1;
		}
	}

	cout << ans << endl;

	v.clear();
}//end	

	return 0;
}

