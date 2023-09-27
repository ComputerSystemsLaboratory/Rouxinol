#include<iostream>
#include<vector>
using namespace std;
int main(void) {
	int input_num;
	vector<int> train_num;
	while (cin >> input_num) {
		if (input_num == 0) {
			cout << train_num.back() << endl;
			train_num.pop_back();
		}
		else{
			train_num.push_back(input_num);
		}
	}
	return 0;
}