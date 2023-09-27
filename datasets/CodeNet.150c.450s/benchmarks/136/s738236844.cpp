#include<iostream>

using namespace std;

int main(){
	int a,b,ta,tb,tc;
	while(cin >> a>>b){
		ta=a;
		tb=b;
		while(1){
			if(ta<tb){
				tc=ta;
				ta=tb;
				tb=tc;
			}
			tc=ta%tb;
			if(tc==0)break;
			ta=tb;
			tb=tc;
		}
		cout << tb<< " "<< a/tb*b <<endl;
	}
	return 0;
}