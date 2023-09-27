#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	int n;

	for(int i=0 ; i<5 ; i++){
		cin >> n;
		a.push_back(n);
	}
	sort( a.begin(), a.end(), greater<int>());
	for(int i=0 ; i<=4 ; i++){
		cout << a[i];
		(i==4)? cout << endl : cout << " ";

	}
}