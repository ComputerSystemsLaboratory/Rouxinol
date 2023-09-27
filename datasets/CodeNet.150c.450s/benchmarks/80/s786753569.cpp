#include <iostream>
using namespace std;

int main(){
	int a[4],b[4],sum_a=0,sum_b=0;

	cin >> a[0] >> a[1] >> a[2] >> a[3];
	cin >> b[0] >> b[1] >> b[2] >> b[3];

	for(int i=0; i<4; ++i){
		sum_a += a[i];
		sum_b += b[i];
	}

	if(sum_a >= sum_b){
		cout << sum_a << endl;
	}else{
		cout << sum_b << endl;
	}
}	