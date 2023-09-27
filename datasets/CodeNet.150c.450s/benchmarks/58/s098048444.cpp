#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>

using namespace std;
int calcReversePoland(string str);

int main()
{
	string str;
	getline(cin, str);
	
	cout << calcReversePoland(str) << endl;

	return 0;
}

int calcReversePoland(string str) {
	stringstream ss(str);
	vector<int> stack;
	string buff;
	int cnt = 0;
	
	// main.
	while (getline(ss, buff, ' ')) {
		stringstream ss(buff);
		int x, y, z;
		if (cnt > 1) {
			x = stack[cnt - 1];
			y = stack[cnt - 2];
		}
		int flg = 0;
		// オペランドの場合
		switch (buff[0]) {
			case '+':
				z = y + x;
				flg = 1;
				break;
			case '-':
				z = y - x;
				flg = 1;
				break;
			case '*':
				z = y * x;
				flg = 1;
				break;
		}

		if (flg == 1) {
			stack.pop_back();
			stack.pop_back();
			cnt -= 2;
		} else {
			ss >> z;
		}
		stack.push_back(z);
		cnt++;
	}
	
	return stack[0];
}