#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, a;
	while(cin >> n, n){
		n++;
		vector<int> t(n);
		t[0] = 0;
		for(int i = 1;i < n;i++){
			cin >> a;
			t[i] = max(t[i-1]+a, a);
		}
		cout << *max_element(t.begin()+1, t.end()) << endl;
	}
	return 0; 
}