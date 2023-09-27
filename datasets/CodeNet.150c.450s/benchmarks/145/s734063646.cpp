#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> words;
	string stock;

	while (cin >> stock) {
		words.push_back(stock);
	}

	vector<int> times(words.size(), 0);
	
	for (unsigned int i = 0;i < words.size();i++) {  //times??????????????°????¨????
		for (unsigned int j = i;j < words.size();j++) {
			if (words.at(i) == words.at(j)) times.at(i)++;
		}
	}

	int mode_times = 0;//?????§???????????°
	int mode_num;  //?????§??????????????????

	for (unsigned int i = 0;i < times.size();i++) {
		if (times.at(i) > mode_times) {
			mode_times = times.at(i);
			mode_num = i;
		}
	}//??????

	int max_length = 0;
	int max_num;

	for (unsigned int i = 0;i < words.size();i++) {
		if (words.at(i).length() > max_length) {
			max_length = words.at(i).length();
			max_num = i;
		}
	} //??????

	cout << words.at(mode_num) << " " << words.at(max_num) << endl;
	
	return 0;
}