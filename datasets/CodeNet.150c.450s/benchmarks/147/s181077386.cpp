#include <bits/stdc++.h>

using namespace std;

map<int,int> mp;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i < 101; i++){
		for (int j = 1; j < 101; j++){
			for (int k = 1; k < 101; k++){
				mp[i*i + j*j + k*k + i*k + i*j + j*k]+=1;				
			}	
		}
	} 	
	for (int i = 1; i <= n;i++){
		cout << mp[i] << "\n";
	}
	return 0;
}