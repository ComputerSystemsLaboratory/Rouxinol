#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int s=0,t=0,x;
	for(int i=0;i<8;i++){
		cin >> x;
		if(i<4){
			s += x;
		}else{
			t += x;
		}
	}
	cout << max(s,t) << endl;
}