#include <iostream>
using namespace std;

int main()
{
	int A[10000];
	
	int a = 1;
	
	for (int i = 0; a != 0; i++) 
	{
		cin >> a;
		A[i] = a;
	}
	
	for (int i = 0; A[i] != 0; i++){
		cout << "Case " << i + 1 << ": " << A[i] << endl;
	}
	
	return 0;
}
