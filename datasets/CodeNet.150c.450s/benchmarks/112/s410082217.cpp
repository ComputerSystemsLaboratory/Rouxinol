#include<iostream>
#include<map>

using namespace std;

int main(void) {
	map<char, char> chgMap;
	int num;
	char in1, in2;
	int i;

	while(true) {
		cin >> num;
		if(num == 0) { break; }
		chgMap.clear();
		for(i = 0; i < num; i++) {
			cin >> in1 >> in2;
			chgMap[in1] = in2;
		}
		cin >> num;
		for(i = 0; i < num; i++) {
			cin >> in1;
			if(chgMap.find(in1) != chgMap.end()) { cout << chgMap[in1]; }
			else { cout << in1; }
		}
		cout << endl;
	}

	return 0;
}