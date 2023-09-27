#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> v(m);
	vector<vector<int> > mx(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> mx[i][j];
		}
	}
	for(int i=0;i<m;i++){
		cin >> v[i];
	}
	for(int i=0;i<n;i++){
		int ans=0;
		for(int j=0;j<m;j++){
			ans+=mx[i][j]*v[j];
		}
		cout << ans << endl;
	}

	return 0;
}