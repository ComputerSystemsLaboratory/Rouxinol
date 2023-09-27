#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(void) {
	vector<int> result;
	array<int, 2> input_add_number;
	while(cin >> input_add_number[0]){
		cin >> input_add_number[1];
		int add_result = input_add_number[0] + input_add_number[1];
		int count = 0;
		for(int i = 1; (add_result / i) != 0; i *= 10){
			count++;
		}
		result.push_back(count);
	}
	for(const auto element : result){
		cout << element << endl;
	}
	return 0;
}