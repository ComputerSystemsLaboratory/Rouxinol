#include <iostream>

using namespace std;

int main(){
	int n;
	int A, B;
	int sum_A, sum_B;
	while (cin >> n, n != 0){
		sum_A = 0;
		sum_B = 0;
		for (int i = 0; i < n; i++){
			cin >> A >> B;
			if (A > B) sum_A += A + B;
			else if (A < B) sum_B += A + B;
			else{
				sum_A += A;
				sum_B += B;
			}
		}
		cout << sum_A << " " << sum_B << endl;
	}
}