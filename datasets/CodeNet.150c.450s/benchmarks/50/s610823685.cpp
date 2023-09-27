#include<iostream>

using namespace std;

int main(){
	while(1){
		int total = 0, cut = 0;
		cin >> total;
		if(total == 0) break;
		total = 1000 - total;
		cut += total / 500;
		total = total % 500;
		cut += total / 100;
		total = total % 100;
		cut += total / 50;
		total = total % 50;
		cut += total / 10;
		total = total % 10;
		cut += total / 5;
		total = total % 5;
		cut += total / 1;
		cout << cut << endl;
	}
	return 0;
}