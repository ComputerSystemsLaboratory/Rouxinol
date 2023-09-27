#include <iostream>
#include <vector>

using namespace std;

int calc(int n){
	int sum = 0;
	
	for(int x = 0; x < 600; x += n){
		sum += x*x*n;
	}

	return sum;
}

int main(){
	vector<int> ans;
	int n;

	while(cin >> n){
		if(cin.eof()){
			break;
		}

		ans.push_back(calc(n));
	}

	for(int& i: ans){
		cout << i << endl;
	}
}