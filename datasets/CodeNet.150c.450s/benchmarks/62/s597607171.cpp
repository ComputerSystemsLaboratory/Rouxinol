#include <iostream>
using namespace std;

int main(void)
{
	int n[3];
	int i;
	int min;
	int t;
	
	min = 100;
	for (i = 0; i < 3; i++){
		cin >> n[i];
		if (min > n[i]){
			min = n[i];
		}
	}
	
	while (1){
		if (n[0] > n[1]){
			t = n[0];
			n[0] = n[1];
			n[1] = t;
		}
		if (n[1] > n[2]){
			t = n[1];
			n[1] = n[2];
			n[2] = t;
		}
		if (n[0] == min){
			break;
		}
	}
	
	cout << n[0];
	for (i = 1; i < 3; i++){
		cout << " " << n[i];
	}
	cout << "\n";
	
	return (0);
}