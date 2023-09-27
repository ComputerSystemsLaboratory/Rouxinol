#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

char keitai[][6] =
{
	".,!? ",	
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};

char out_keitai(int num, int count) {
	if (num == 1) {
		if (count%5 != 0) {
			return keitai[num-1][(count%5)-1];
		}else {
			return keitai[num-1][4];
		}
	}else if (num == 7 || num == 9) {
		if (count%4 != 0) {
			return keitai[num-1][(count%4)-1];
		}else {
			return keitai[num-1][3];
		}
	}else {
		if (count%3 != 0) {
			return keitai[num-1][(count%3)-1];
		}else {
			return keitai[num-1][2];
		}
	}
}
int main(void) {
	int n;
	char inp;
	std::string str;

	getline(cin, str);
	n = atoi(str.c_str());

	for (int i = 0; i < n; i++) {
		getline(cin, str);
		int num;
		int count = 0;
		for (int j = 0; j < str.length(); j++) {
			std::string dstr;
			dstr = str.substr(j,1);
			num = atoi(dstr.c_str());
			if (num != 0) {
				count++;
				int seq = 1;
				int next_num;
				while (seq) {
					dstr = str.substr(j+1,1);
					next_num = atoi(dstr.c_str());
					if (num == next_num) {
						count++;
						j++;
					}else {
						seq = 0;
						cout << out_keitai(num,count);
						count = 0;
					}
				}	
			}
		}
		cout << endl;
	}
	return 0;
}