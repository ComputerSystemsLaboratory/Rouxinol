#include<iostream>
using namespace std;

int main(){
	int d, hd;
	int sum;
	while(cin >> d){
		sum = 0;
		hd = d;
		while(hd < 600){
			sum += hd*hd*d;
			hd += d;
		}
		cout << sum << endl;
	}
	return 0;
}