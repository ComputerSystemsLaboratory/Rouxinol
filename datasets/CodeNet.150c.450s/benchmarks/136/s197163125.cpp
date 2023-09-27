#include <iostream>
#include <vector>

using namespace std;

//????°???¬?????°
unsigned int comp_GCD(unsigned int a, unsigned int b){
	while(1){
		unsigned int r;
		r = a % b;
		a = b;
		b = r;
		if(b == 0){
			return a;
		}
	}
	return 0;
}

//?????????
int main() {
	unsigned int a, b;
	vector<unsigned int> result_gcd;
	vector<unsigned int> result_lcm;
	while(cin >> a >> b){
		unsigned int gcd = comp_GCD(a, b);
		result_gcd.push_back(gcd);
		result_lcm.push_back(a * (b / gcd));
	}
	for(unsigned int i = 0; i < result_gcd.size(); i++){
		cout << result_gcd[i] << " " << result_lcm[i] << endl;
	}
	return 0;
}