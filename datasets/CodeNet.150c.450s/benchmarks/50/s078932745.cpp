#include <iostream>

using namespace std;

int main(void){
	int n;
	
	while(cin >> n && n){
		int v = 1000 - n;
		int ret = 0;
		
		ret += v / 500;
		v -= (v / 500) * 500;
		
		ret += v / 100;
		v -= (v / 100) * 100;
		
		ret += v / 50;
		v -= (v / 50) * 50;
		
		ret += v / 10;
		v -= (v / 10) * 10;
		
		ret += v / 5;
		v -= (v / 5) * 5;
		
		ret += v;
		cout << ret << endl;
	}
}