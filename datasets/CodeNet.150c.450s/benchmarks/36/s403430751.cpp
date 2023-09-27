#include<iostream>
using namespace std;

int main(void){
	int d;
	long s;
	while(cin >> d){
		s = 0;
		for(int i = 1; i * d + d <= 600; i++){
			s +=  (d * i) * (d * i) * d;
		}
		cout << s << endl;
	}
	return 0;
}