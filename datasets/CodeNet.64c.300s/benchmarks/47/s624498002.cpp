#include <iostream>
#include <algorithm>
using namespace std;

int data[101];
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	while(cin >> n){
		data[n]++;
	}

	int m = 0;
	for(int i = 1; i <= 100; ++i){
		m = max(data[i], m);
	}

	for(int i = 1; i <= 100; ++i){
		if(data[i] == m){
			cout << i << endl;
		}
	}

	return 0;
}