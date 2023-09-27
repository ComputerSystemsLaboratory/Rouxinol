#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>

using namespace std;

void inputData(vector<string>& data_set) {
	string buffer;
	while(getline(std::cin,buffer))
		data_set.push_back(buffer);
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

template <class T>
T convertStringToNumber(const string& str) {
	stringstream ss;
	T ret;

	ss << str;
	ss >> ret;

	return ret;
}



vector<double> parseStringData(const string& data_str) {
	auto buff = splitString(data_str);

	vector<double> ret(buff.size());
	for(int i = 0; i < buff.size(); ++i){
		auto temp = convertStringToNumber<double>(buff[i]);
		ret[i] = temp;
	}

	return ret;
}


void displayAnswer(const vector<double>& data_set) {
	double det = 1.0 / (data_set[0] * data_set[4] - data_set[1] * data_set[3]); 
	double x = det * (data_set[4] * data_set[2] + -data_set[1] * data_set[5]);
	double y = det * (-data_set[3] * data_set[2] + data_set[0] * data_set[5]);

	auto func = [](double n) -> double {
		int buff = static_cast<int>(round(n * 1000));
		if(!abs(buff))
			return abs(buff);
		return buff / 1000.0;
	};

	x = func(x);
	y = func(y);

	cout << fixed << setprecision(3) << x << " " << y << std::endl;
}


void doAllProcess() {
	vector<string> buffer;
	inputData(buffer);

	for(int i = 0; i < buffer.size(); ++i){
		auto data_set = parseStringData(buffer[i]);
		displayAnswer(data_set);
	}
}


int main() {
	doAllProcess();

	return 0;
}
