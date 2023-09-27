#include <iostream>
#include "math.h"
using namespace std;
int Debt = 100000;

void RoundUp(int& Integer, int Power)
{
	int Place = pow(10, Power);
	if(Integer % Place != 0){
		Integer = Place * (Integer / Place + 1);
	}
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		Debt *= 1.05;
		RoundUp(Debt, 3);
	}
	cout << Debt << endl;
	return 0;
}