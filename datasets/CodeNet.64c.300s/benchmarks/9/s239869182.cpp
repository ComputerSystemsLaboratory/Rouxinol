#include<iostream>
using namespace std;

int main(){
	int n, output = 100000;
	cin >> n;
	for (int i = 0; i < n; i++){
		output *= 1.05;
		if (output % 1000 != 0){
			output += 1000;
			output -= output % 1000;
		}
	}
	cout << output << endl;
	return 0;
}