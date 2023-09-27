#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> train;
string str;
int cnt = 0;

void DivideTrain(){
	for (int i = 1; i < str.size(); i++){
		string t1 = "", t2 = "", Rt1 = "", Rt2 = "";
		for (int j = 0; j < i; j++) t1 += str[j];
		for (int j = i; j < str.size(); j++) t2 += str[j];
		for (int j = t1.size() - 1; j >= 0; j--) Rt1 += t1[j];
		for (int j = t2.size() - 1; j >= 0; j--) Rt2 += t2[j];
		if (train.find(t1 + t2) == train.end()) train[t1 + t2] = 1;
		if (train.find(t1 + Rt2) == train.end()) train[t1 + Rt2] = 1;
		if (train.find(t2 + t1) == train.end()) train[t2 + t1] = 1;
		if (train.find(t2 + Rt1) == train.end()) train[t2 + Rt1] = 1;
		if (train.find(Rt1 + t2) == train.end()) train[Rt1 + t2] = 1;
		if (train.find(Rt1 + Rt2) == train.end()) train[Rt1 + Rt2] = 1;
		if (train.find(Rt2 + t1) == train.end()) train[Rt2 + t1] = 1;
		if (train.find(Rt2 + Rt1) == train.end()) train[Rt2 + Rt1] = 1;
	}
}

int main(){
	int m;
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> str;
		DivideTrain();
		cout << train.size() << endl;
		train.clear();
		str.clear();
		cnt = 0;
	}
	cin >> m;
	return 0;
}