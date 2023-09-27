#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[5];
	
	for (int i = 0; i < 5; i++){
		cin >> num[i];
	}
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (num[i] >= num[j]){
				swap(num[i], num[j]);
			}
		}
	}
	
	cout << num[0];
	for (int i = 1; i < 5; i++){
		cout << " " << num[i];
	}
	cout << endl;
	
	return (0);
}