#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <utility>


using namespace std;

template <class T>
T convertStringToNumber(const string& str) {
	stringstream ss;
	T ret;

	ss << str;
	ss >> ret;

	return ret;
}


vector<vector<string>> inputData() {
	vector<vector<string>> data_set;

	string buffer;

	while(true){
		getline(cin, buffer);
		int n = convertStringToNumber<int>(buffer);

		if(!n)
			break;

		vector<string> temp;
		for(int i = 0; i < n; ++i) {
			getline(cin, buffer);
			temp.push_back(buffer);
		}

		data_set.push_back(temp);
	}

	return data_set;
}


vector<string> splitString(const string& str, const string& separator = " ") {
	vector<string> ret;

	std::size_t bp, ep;
	bp = ep = 0;
	while((ep = str.find_first_of(separator, bp)) != string::npos){
		if(bp != ep){
			ret.push_back(string(str.begin() + bp, str.begin() + ep));
		}
		bp = ep + 1;
	}

	if(bp <= str.size() - 1){
		ret.push_back(string(str.begin() + bp, str.end()));
	}

	return ret;
}



pair<int,int> judgeScore(int a, int b) {
	if(a > b)
		return make_pair(a+b, 0);
	else if(a < b)
		return make_pair(0, a+b);
	else
		return make_pair(a, b);
}


void doAllProcess() {
	auto data_set = inputData();

	for(int i = 0; i < data_set.size(); ++i) {
		int player1, player2;
		player1 = player2 = 0;

		for(int j = 0; j < data_set[i].size(); ++j) {
			auto score = splitString(data_set[i][j]);
			auto ret = judgeScore(convertStringToNumber<int>(score[0]),
									convertStringToNumber<int>(score[1]));
			player1 += ret.first;
			player2 += ret.second;
		}

		cout << player1 << " " << player2 << endl;
	}
}


int main() {
	doAllProcess();

	return 0;
}
