#include <iostream>
using namespace std;

int main()
{
	int data[101] = {0}, n, max = 0;

	while (cin >> n){
		data[n]++;
	}

	for (int i = 1; i < 101; i++){
		if (max < data[i]) max = data[i];
	}

	for (int i = 1; i < 101; i++){
		if (data[i] == max) cout << i << endl;
	}

	return (0);
}