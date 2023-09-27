#include<iostream>
#include<vector>
using namespace std;

int main(){
	int a, b;
	vector<int> output;
	while(cin >> a >> b){
		int sum = a + b;
		int digit = 0;
		while(sum){
			sum /= 10;
			digit++;
		}
		output.push_back(digit);
	}
	for(vector<int>::iterator itr = output.begin(); itr != output.end(); ++itr){
		cout << *itr << endl;
	}
	return 0;
}