#include <iostream>
#include <algorithm>

int main(void)
{
	using namespace std;
	int data[3];
	for(int i=0; i<3; i++){
		cin >> data[i];
	}

	int count = 0;
	for(int j=data[0]; j <= data[1]; j++){
		if(data[2] % j == 0) count++;
	}
	cout << count << endl;

	return 0;

}