#include <iostream>
#include<math.h>
using namespace std;



int main(void){
	

	unsigned long int n, sum = 100000;
	long double Ceil;
	cin >> n;

	for (int i = 0; i < n; i++){

		sum /= 1000;
		Ceil = ceil(sum*1.05);
		sum=Ceil*1000;
	}		
	cout << sum << endl;


	
	return 0;
}