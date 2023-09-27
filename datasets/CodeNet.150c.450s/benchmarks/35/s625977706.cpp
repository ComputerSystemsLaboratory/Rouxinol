#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	int n;
	while(cin >> n, n){
		n++;
		vector<int> t(n), v(n);
		t[0] = 0;
		for(int i = 1;i < n;i++){
			cin >> v[i];
			t[i] = max(t[i-1]+v[i], v[i]);
		}
		cout << *max_element(t.begin()+1, t.end()) << endl;
	}
	return 0; 
}