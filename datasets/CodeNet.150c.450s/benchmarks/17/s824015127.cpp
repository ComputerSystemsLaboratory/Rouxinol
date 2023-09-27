#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v(5);
	for(int i=0;i<5;i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	cout << v[0];
	for(int i=1;i<5;i++){
		cout << " " << v[i];
	}
	cout << endl;
	return 0;
}