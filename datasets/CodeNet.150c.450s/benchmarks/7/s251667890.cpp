#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(void)
{
	array<int, 10> input;

	for(int i = 0; i < 10; i++){
		cin >> input[i];
	}

	sort(begin(input), end(input));

	for(int i = 0; i < 3; i++){
		cout << input[9-i] << endl;
	}


	return 0;
}