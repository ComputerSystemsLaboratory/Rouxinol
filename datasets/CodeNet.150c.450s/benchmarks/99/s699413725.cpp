#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>

#define REP(i,n) for(int i=0; i < n; ++i)
#define EACH(it,c) for(decltype((c).begin()) it = (c).begin(); it != (c).end(); ++it)

using namespace std;

int str2num(const string& rhs) {
	int digit = 0;
	int result = 0;
	REP(j, rhs.length()) {
		const char ch = rhs[j];
		if(isdigit(ch)) {
			digit = ch - '0';
			continue;
		}
		// alpha
		if (digit == 0) {
			digit = 1;
		}
		int heavy = 1;
		switch (ch) {
			case 'm':
				heavy = 1000;
				break;
			case 'c':
				heavy = 100;
				break;
			case 'x':
				heavy = 10;
				break;
			case 'i':
				heavy = 1;
				break;
		}
		result += digit * heavy;
		digit = 1;
	}
	return result;
}

string num2str(int rhs) {
	int digit = 1000;
	string result;

	while(rhs > 0) {
		if(rhs / digit > 1)
			result.push_back(rhs / digit + '0');
		else if(rhs / digit == 0){
			digit /= 10;
			continue;
		}
		switch(digit) {
		case 1000:
			result.push_back('m');
			break;
		case 100:
			result.push_back('c');
			break;
		case 10:
			result.push_back('x');
			break;
		case 1:
			result.push_back('i');
			break;
		}

		rhs   %= digit;
		digit /= 10;
	}

	return result;
}

int main() {
	std::ios::sync_with_stdio();
	
	int n;
	cin >> n;
	REP(i, n) {
		string strA, strB;
		cin >> strA >> strB;

		// 10進数への変換
		const int dexNumA = str2num(strA);
		const int dexNumB = str2num(strB);
		const int sum = dexNumA + dexNumB;
		
		// x進数への変換
		const string result = num2str(sum);

		//cout << "sum = A + B == " << sum << " = " << dexNumA << " + " << dexNumB << endl;

		// 出力処理
		cout << result << endl;
	}

	return 0;
}