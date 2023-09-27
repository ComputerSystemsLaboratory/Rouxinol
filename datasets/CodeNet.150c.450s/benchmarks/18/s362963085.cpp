#include<iostream>
#include<math.h>
int main(){
	int n;
	double Debt=100000;
	long int Debt_ans;
	std::cin >> n;
	for (int i = 0; i < n; i++){
		Debt = Debt*1.05 / 1000;
		Debt = ceil(Debt);
		Debt = Debt * 1000;
	}
	Debt_ans = Debt;
	std::cout << Debt_ans<< std::endl;
}