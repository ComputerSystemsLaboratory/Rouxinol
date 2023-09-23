#include<iostream>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		int sum = 0;
		for (int i = n; i<600; i += n){
			sum += n*i*i;
		}
		cout << sum << endl;
	}
}