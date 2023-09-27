#include <iostream>
#include <vector>
using namespace std;



int main(){
	
	long int d,square,height;
	long int elem,sum;

	while (cin >> d){
		sum = 0;
		elem = 600 / d;
		for (int i = 0; i < elem; i++){
		
			height = (d*i)*(d*i);
			square = height*d;
			sum += square;
		}
		cout << sum << endl;
	}

	return 0;
}