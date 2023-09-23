#include<iostream>
using namespace std;

int main(){
	int n;
	long long int result;
	cin >> n;
	result = 1;
	for(int i=1;i<n+1;i++){
		result *= i;
	}
	cout << result << endl;
}