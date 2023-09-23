#include<iostream>
using namespace std;

int main(){
	int n;
	long long int x=1;
	cin >> n;
	for (int i = 1; i <= n; i++){
		x = x*i;
	}
	cout << x << endl;
}
