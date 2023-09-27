#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int main(){

	vector<int> data(10);

	rep(i,10){
		cin >> data[i];
	}

	sort(data.begin(),data.end());

	rep(i,3){
		cout << data[9 - i] << endl;
	}


	return 0;
}