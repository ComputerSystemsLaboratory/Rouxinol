#include <iostream>
using namespace std;

int main()
{
	int a=0;
	int b=0;
	int sum=0;
	int digit=0;
	
	while(cin >> a >> b){
		sum = a + b;
		
		while(sum){
			sum = sum / 10;
			digit++;
		}
		
		cout << digit << endl;
		digit = 0;
	}
	
	return 0;
}