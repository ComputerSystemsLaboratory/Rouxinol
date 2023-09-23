#include<iostream>
#define X 600
using namespace std;

int main(){
	int i, d, x,  s;
	while(cin >> d){
		x = s = 0;
		while(x < X){
			s += (x*x) * d;
			x += d;
		}
		cout << s << endl;
	}
	return 0;
}