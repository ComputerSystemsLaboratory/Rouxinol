#include <iostream>
using namespace std;

int main()
{
	int n;
	long long int anser = 1;
	
	cin >> n;
	
	while (n){
		anser *= n--;
	}
	
	cout << anser << endl;
	
	return (0);
}