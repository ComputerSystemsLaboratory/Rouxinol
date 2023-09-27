#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	while(1){
		string Previous;
		cin >> Previous;
		if(Previous == "-") break;
		
		int m;
		cin >> m;
		vector<int> h;
		for(int i = 0; i < m; i++){
			int g;
			cin >> g;
			h.push_back(g);
		}
		
		char After[200];
		int n = Previous.size();
		for(int i = 0; i < m; i++){
			for(int j = h[i]; j < n; j++) After[j-h[i]] = Previous[j];
			for(int j = 0; j < h[i]; j++) After[n-h[i]+j] = Previous[j];
			for(int j = 0; j < n; j++) Previous[j] = After[j];
		}
		
		for(int i = 0; i < n; i++) cout << After[i];
		cout << endl;
	}
		
	return 0;
}	