#include <iostream>
#include <vector>
using namespace std;

int count(int n){
	int counter = 0;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			for(int k = 0; k < 10; k++){
				for(int l = 0; l < 10; l++){
					if((i + j + k + l) == n){
						counter++;
					}
				}
			}
		}
	}
	return counter;
}

int main(){
	vector<int> results;
	int n;
	while(cin >> n){
		results.push_back(count(n));
	}
	for(auto result : results){
		cout << result << endl;
	}
	return 0;
}