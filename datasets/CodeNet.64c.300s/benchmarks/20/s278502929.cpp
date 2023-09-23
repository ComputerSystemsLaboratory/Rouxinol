#include <iostream>

using namespace std;

int f(int x){
	return x*x;
}

int main(void){
	int d;
	while(cin >> d){
		int s=0;
		for(int i=0;i<600;i+=d){
			s += f(i)*d;
		}
		cout << s <<"\n";
	}
	return 0;
}