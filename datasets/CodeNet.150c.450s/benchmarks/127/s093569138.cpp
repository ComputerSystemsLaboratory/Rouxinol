#include <bits/stdc++.h>

using namespace std;

string reverse(string str) {
	string r_str;
	for(int i = 0; i < str.size(); i++) {
		r_str = str[i] + r_str;
	}
	return r_str;
}

void search(string tmp, vector<string>& patturn) {
	vector<string>::iterator cIter = find(patturn.begin(), patturn.end(), tmp);
	if(cIter == patturn.end()) {
		patturn.push_back(tmp);
	}
}

int count_patturn(string input, vector<string>& patturn) {
	for(int i = 0; i < input.size() - 1; i++) {
		string first, second, r_first, r_second, tmp;
		for(int j = 0; j < input.size(); j++) {
			if(j <= i){
				first = first + input[j];
			}else{
				second = second + input[j];
			}
		}
		r_first = reverse(first);
		r_second = reverse(second);

		tmp = first + second;
		search(tmp, patturn);
		tmp = first + r_second;
		search(tmp, patturn);
		tmp = r_first + second;
		search(tmp, patturn);
		tmp = r_first + r_second;
		search(tmp, patturn);
		tmp = second + first;
		search(tmp, patturn);
		tmp = r_second + first;
		search(tmp, patturn);
		tmp = second + r_first;
		search(tmp, patturn);
		tmp = r_second + r_first;
		search(tmp, patturn);
	}
	return patturn.size();
}

int main(void) {
	int m;
	cin >> m;
	for(int i = 0; i < m; i++) {
		string input;
		cin >> input;

		vector<string> patturn;
		int num = count_patturn(input, patturn);
		cout << num << endl;
	}
	return 0;
}