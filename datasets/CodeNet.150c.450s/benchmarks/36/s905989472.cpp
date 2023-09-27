#include <iostream>
using namespace std;

int GetLowerApproximatedArea(int Delta)
{
	int LowerApproximatedArea = 0;
	for(int i = 0; Delta * i < 600; i++){
		LowerApproximatedArea += Delta * Delta * i * Delta * i;
	}
	return LowerApproximatedArea;
}

int main()
{
	while(true){
		int Delta;
		cin >> Delta;
		if(cin.eof() == true) break;
		cout << GetLowerApproximatedArea(Delta) << endl;
	}
	return 0;
}