#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> a;
	for(int i = 0; i < 5; i++){
		int n; cin >> n;
		a.push_back(n);
	}
	sort(a.begin(), a.end(), greater<int>());
	for(int i = 0; i < 4; i++)
		cout << a[i] << " ";
	cout << a[4] << endl;
	return 0;
}