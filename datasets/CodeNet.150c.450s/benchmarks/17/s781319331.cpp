#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int array[5];

	for (int i = 0; i < 5; i++){
		cin >> array[i];
	}

	sort(array, array + 5);

	for (int i = 4; i >= 0; i--){
		if (i == 0){
			cout << array[0] << endl;
		}
		else {
			cout << array[i] << " ";
		}
	}

	return (0);
}