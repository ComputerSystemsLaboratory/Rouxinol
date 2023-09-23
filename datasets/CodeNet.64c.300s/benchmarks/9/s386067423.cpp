#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int main(){
	int n;
	int total = 100000;
	
	cin >> n;
	
	for(int i = n; i > 0; i--){
	total = total + (0.05 * total);
	if(total % 1000 != 0){
		total = total - (total % 1000);
		total = total + 1000;
	}
	}
	cout << total << endl;
	
	return 0;
}