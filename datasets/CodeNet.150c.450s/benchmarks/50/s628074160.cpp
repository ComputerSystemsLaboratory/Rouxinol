#include <iostream>
using namespace std;

int main() {
	int n;
	while(1){
		cin >> n;
		if(n == 0) break;
		int a = 1000-n, count = 0;
		if(a>=500){
			a -= 500;
			count++;
		}
		while(a>=100){
			a -= 100;
			count++;
		}
		if(a>=50){
			a -= 50;
			count++;
		}
		while(a>=10){
			a -= 10;
			count++;
		}
		if(a>=5){
			a -= 5;
			count++;
		}
		while(a>0){
			a--;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
