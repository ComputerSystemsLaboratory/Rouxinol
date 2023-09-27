#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> data(n);
	for(auto &a:data){
		cin >> a;
	}
	int check = 0;
	for(int i = 0; i < n; i++){
		int count = 0;
		for(int j = 2; j <= sqrt(data[i]); j++){
			if(data[i] % j == 0){
				count++;
				j = data[i];
			}
		}
		if(!count) check++;
	}
	cout << check << endl;
	return 0;
}				