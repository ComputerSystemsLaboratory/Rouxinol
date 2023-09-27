#include <iostream>

using namespace std;

int main(){
	int n, p;
	while(cin >> n >> p, n){
		int num = p, pos = 0;
		int s[50] = {};
		while(true){
			pos %= n;
			if(num==0) swap(num, s[pos]);
			else       num--, s[pos]++;
			if(s[pos]==p){
				cout << pos << endl;
				break;
			}
			pos++;
		}
	}
}