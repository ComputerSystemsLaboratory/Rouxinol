#include<iostream>

using namespace std;

int main()
{
	int high[10] = { };
	int first = 0, second = 0, third = 0;
	
	for(int i = 0; i < 10; i++){
		cin >> high[i];
		
		if(first <= high[i]){
			third = second;
			second = first;
			first = high[i];
		}
		else if(second <= high[i]){
			third = second;
			second = high[i];
		}
		else if(third <= high[i])
			third = high[i];
	}
	
	cout << first << endl << second << endl << third << endl;
	
	
	return 0;
}