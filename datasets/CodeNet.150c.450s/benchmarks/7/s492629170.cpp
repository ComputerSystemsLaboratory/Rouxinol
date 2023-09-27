#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main(){
	vector<int> vc;
	int n;

	while(cin >> n){
		vc.push_back(n);
	}

	sort(vc.begin(), vc.end(), greater<int>());

	for(int i = 0; i < 3; i++)
		cout << vc[i] << endl;
}