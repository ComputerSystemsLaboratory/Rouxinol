
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	int n;
	cin >> n;

	char c[10][5] = {
		{'*', '*', '*', '*', '*'},
		{'.', ',', '!', '?', ' '},
		{'a', 'b', 'c', '*', '*'},
		{'d', 'e', 'f', '*', '*'},
		{'g', 'h', 'i', '*', '*'},
		{'j', 'k', 'l', '*', '*'},
		{'m', 'n', 'o', '*', '*'},
		{'p', 'q', 'r', 's', '*'},
		{'t', 'u', 'v', '*', '*'},
		{'w', 'x', 'y', 'z', '*'}
	};
	int max[] = {
	//  0, 1, 2, 3, 4, 5, 6, 7, 8, 9
		0, 5, 3, 3, 3, 3, 3, 4, 3, 4
	};

	for(int i = 0; i < n; i++) {
		string number;
		string message;
		int num, flg = 0, sel = 0;
		char ch;
		cin >> number;

		for(int j = 0; j < number.length(); j++) {
			num = atoi( number.substr(j, 1).c_str() );
			if(num == 0) {
				if(flg == 0) continue;
				else message += ch;
				flg = 0;
				sel = 0;
			} else {
				flg = 1;
				ch = c[num][sel];
				sel ++;
				if(sel >= max[num]) sel = 0;
			}
		}

		cout << message << endl;

	}

	//while(1){}
	return 0;
}