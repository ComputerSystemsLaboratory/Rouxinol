#include <iostream>
using namespace std;

int main(void){
	int n;
	while(cin >> n && n){
		int v = 1000 - n;
		int ret = 0;
		int c[] = {500,100,50,10,5,1};
		for(int i=0;i<6;i++){
			ret += v / c[i];
			v -= (v/c[i])*c[i];
		}
		cout << ret << endl;
	}
}