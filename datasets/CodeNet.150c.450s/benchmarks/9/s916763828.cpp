#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> H(int m){
	vector<int> h;
	for(int i = 0; i < m; i++){
		int g;
		cin >> g;
		h.push_back(g);
	}
	return h;
}

string Shuffle(string Previous, vector<int> h, int m, int n){
	char after[200];
	string After;
	for(int i = 0; i < m; i++){
		for(int j = h[i]; j < n; j++) after[j-h[i]] = Previous[j];
		for(int j = 0; j < h[i]; j++) after[n-h[i]+j] = Previous[j];
		for(int j = 0; j < n; j++) Previous[j] = after[j];
	}
	for(int i = 0; i < n; i++){
		After.push_back(after[i]);
	}
	return After;
}

int main(){
	while(1){
		string Previous;
		cin >> Previous;
		if(Previous == "-") break;
		
		int m;
		cin >> m;
		vector<int> h = H(m);
		
		string After;
		int n = Previous.size();
		After = Shuffle(Previous, h, m, n);
		
		cout << After << endl;
	}
		
	return 0;
}	