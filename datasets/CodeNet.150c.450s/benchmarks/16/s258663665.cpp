#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void inti(vector<int64_t> &sp, const string &str) {
	int64_t h = 0;
	sp[0] = h; 
	for (size_t i = 1; i < sp.size(); i++) {
		if (str[i - 1] == '\\')		h--;	//Down
		else if (str[i - 1] == '/')	h++;	//Up
		sp[i] = h;
	}
}

int64_t calcPuddleArea(const size_t pos_begin,const size_t pos_end,const vector<int64_t> &sp) {
	int64_t area = 0;
	for (size_t i = pos_begin; i < pos_end; i++) {
		area += ((sp[pos_begin] - sp[i]) + (sp[pos_begin] - sp[i + 1])) * 1;
	}
	return area/2 ;
}

void search(const vector<int64_t> &sp, vector<int64_t> &puddle) {
	size_t pos_begin = 0;
	size_t pos_end;
	while (pos_begin < sp.size() - 1) {
		if (sp[pos_begin] > sp[pos_begin + 1]) {
			for (pos_end = pos_begin + 1;pos_end < sp.size(); pos_end++) {
				if (sp[pos_end] == sp[pos_begin]) {
					break;
				}
			}

			if (pos_end != sp.size()) {
				puddle.push_back(calcPuddleArea(pos_begin, pos_end, sp));
				pos_begin = pos_end;
			}
			else {
				pos_begin++;
			}
		}
		else {
			pos_begin++;
		}
	}
}

void print(const vector<int64_t> &puddle) {
	int64_t sum_area = 0;
	for (size_t i = 0; i < puddle.size(); i++) {
		sum_area += puddle[i];
	}
	cout << sum_area << endl << puddle.size();
	for (size_t i = 0; i < puddle.size(); i++) {
		cout << " " << puddle[i];
	}
	cout << endl;
}

int main() {
	string str;
	vector<int64_t> sp;
	vector<int64_t> puddle;

	cin >> str;
	sp.resize(str.size() + 1);

	inti(sp, str);
	search(sp, puddle);
	print(puddle);

	return 0;
}