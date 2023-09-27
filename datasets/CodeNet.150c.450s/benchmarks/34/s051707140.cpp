#include <iostream>
using namespace std;
int main(){
	int n;
	long long dan[31] = {1,1,2};
	for(int i=3;i<31;i++){
		dan[i] = dan[i-3] + dan[i-2] + dan[i-1];
	}
	while(cin >> n,n){
		int year = dan[n] / 10 / 365;
		if((double)dan[n] / 10.0 / 365.0 - year > 0)year++;
		cout << year << endl;
	}
}