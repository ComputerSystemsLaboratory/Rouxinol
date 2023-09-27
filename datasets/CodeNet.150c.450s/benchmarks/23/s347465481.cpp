#include <iostream>
using namespace std;
int TwicePreviousValue = 1;
int PreviousValue = 1;

int Fibonacci(const int& n)
{
	if(n == 0) return TwicePreviousValue;
	if(n == 1) return PreviousValue;
	int CurrentValue = TwicePreviousValue + PreviousValue;
	for(int i = 2; i < n; i++){
		int TemporaryValue = PreviousValue;
		CurrentValue  += PreviousValue;
		PreviousValue += TwicePreviousValue;
		TwicePreviousValue = TemporaryValue;
	}
	return CurrentValue;
}
 
int main()
{
	int n;
	cin >> n;
	cout << Fibonacci(n) << endl;
	return 0;
}