#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a = 1;
	int b = 1;
	for(int i=1; i<n;++i){
		int t = b;
		b = a + b;
		a = t;
	}
	cout << b << std::endl;
}