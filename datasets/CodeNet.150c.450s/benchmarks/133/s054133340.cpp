#include<bits/stdc++.h>
using namespace std;

int D;
vector<int> c(26);
vector<vector<int>> s(365, vector<int>(26));
vector<int> last(26,0);

long long dec(int d){
	long long res = 0;
	for (int i=0; i<26; i++) res += c[i]*(d-last[i]);
	return res;
}
	

int main(){
	cin >> D;
	for (int i=0; i<26; i++) cin >> c[i];

	for (int i=0; i<D; i++){
		for(int j=0; j<26; j++){
			cin >> s[i][j];
		}
	}
	

	long long sat = 0;
	for (int d=0; d<D; d++){
		int t;
		cin >> t;

		sat += s[d][t-1];
		last[t-1] = d+1;
		sat -= dec(d+1);
		cout << sat << endl;
	}

	return 0;
}