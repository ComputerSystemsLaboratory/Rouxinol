#include<iostream>
using namespace std;

int main(){

	long long a = 0, b = 0;

	while (cin >> a >> b){
		long long gcd = 0;
		long long lcm = 0;
		long long r = 0;
		long long temp_a = 0, temp_b = 0;
		long long tmp = 0;
		temp_a = a;
		temp_b = b;
		if (temp_a < temp_b){
			tmp = temp_a;
			temp_a = temp_b;
			temp_b = tmp;
		}
		while (temp_a % temp_b != 0){
			r = temp_a % temp_b;
			temp_a = temp_b;
			temp_b = r;
		}
		gcd = temp_b;
		lcm = (a / gcd) * b;
		cout << gcd << " "<< lcm << endl;


	}

	//getchar();

	return 0;
}