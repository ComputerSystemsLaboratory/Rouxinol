#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> a;
	for(int n; cin >> n;){
		if(!n) cout << a[a.size() - 1] << endl, a.pop_back();
		else a.push_back(n);
	}
	return 0;
}