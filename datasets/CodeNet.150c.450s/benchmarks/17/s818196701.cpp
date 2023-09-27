#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int i, j, input[5];
	
	for(i=0; i<5; i++) cin >> input[i];
	
	sort(input, input+5, greater<int>());
	
	cout << input[0];
	
	for(j=1; j<5; j++) cout << " " << input[j];
	
	cout << endl;

	return 0;
}