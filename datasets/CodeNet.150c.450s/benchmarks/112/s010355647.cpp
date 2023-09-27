#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <utility>
#include <unordered_map>


using namespace std;


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


class ConversionTable {
public:
	ConversionTable(const std::vector<std::string>& data_set) {
		for(auto ite = std::begin(data_set); ite != std::end(data_set); ++ite) {
			auto data = splitString(*ite);
			table[data[0][0]] = data[1][0];
		}
	}

	char convertData(char data) {
		return (table.find(data) != std::end(table) ? table[data] : data);
	}

private:
	std::unordered_map<char, char> table;
};


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


void one_process(const vector<string>& table, const vector<string>& data) {
	ConversionTable ct(table);

	for(auto ite = begin(data); ite != end(data); ++ite) {
		cout << ct.convertData((*ite)[0]);
	}
	cout << endl;
}


void doAllProcess() {
	auto data_set = inputData();

	for(auto ite = begin(data_set); ite != end(data_set); ite+=2)
		one_process(*ite, *(ite+1));
}


int main() {
	doAllProcess();

	return 0;
}
