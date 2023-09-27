#include <iostream>
#include <string>

using namespace std;

struct SE {
	int from;
	int to;
};

string s;
int A = 0;
int k = 0;
int L[10001];
SE se[10001];
int area;
int depth;
int length;

int tobasu(int from) {
	int i = from;
	while (i < length && s[i] != '\\') {
		++i;
	}
	return i;
}

int reverse_tobasu(int from, int to) {
	int i = from;
	while (to <= i && s[i] != '/') {
		--i;
	}
	return i;
}

int calc_area(int from, int to) {
	int d = 0;
	int a = 0;
	for (int l = from; l <= to; ++l) {
		if (s[l] == '\\') {
			a += (d + 1);
			d += 2;
		}
		else if (s[l] == '_') {
			a += d;
		}
		else {
			a += (d - 1);
			d -= 2;
		}
	}
	return a / 2;
}

int main() {
	int k2;
	cin >> s;
	//s = "\\/\\_/\\/__////////_/\\/_\\__\\\\\\/__/_/////\\/\\\\_\\\\_\\\\//////_/\\_//\\\\//___/___\\_\\\\/_//////\\_/\\/\\/_/\\//\\_///\\/_/_/\\\\/_/\\/_/\\//__\\//____///\\_/_///_///\\//_\\_\\//////_/\\//\\/\\//_//_/\\_\\/\\_\\\\/\\/////\\/\\_/_/___/__\\_/";
	length = s.size();
	int i = tobasu(0);

	if (i == length) {
		cout << 0 << endl;
		cout << 0 << endl;
		return 0;
	}

	int from, to;
	depth = 0;
	from = i;
	bool flag = false;

	while (i < length) {
		if (s[i] == '\\') {
			++depth;
		}
		else if (s[i] == '/') {
			--depth;
			flag = true;
		}

		if (depth == 0) {
			to = i;
			++k;
			se[k].from = from;
			se[k].to = to;
			++i;
			i = tobasu(i);
			from = i;
			flag = false;
		}
		else {
			++i;
		}
	}
	if (flag == false) {
		;
	}
	else {
		k2 = k;
		int from_here = from;
		i = length - 1;
		i = reverse_tobasu(i, from_here);
		depth = 0;
		to = i;
		while (from_here <= i) {
			if (s[i] == '/') {
				++depth;
			}
			else if (s[i] == '\\') {
				--depth;
			}

			if (depth == 0) {
				from = i;
				++k;
				se[k].from = from;
				se[k].to = to;
				--i;
				i = reverse_tobasu(i, from_here);
				to = i;
			}
			else {
				--i;
			}
		}
		int k3 = k - k2;
		k3 = k3 / 2;
		for (int k4 = 1; k4 <= k3; ++k4) {
			SE temp = se[k2 + k4];
			se[k2 + k4] = se[k - k4 + 1];
			se[k - k4 + 1] = temp;
		}
	}



	for (int j = 1; j <= k; j++) {
		L[j] = calc_area(se[j].from, se[j].to);
		A += L[j];
	}


	cout << A << endl;
	cout << k;
	for (int j = 1; j <= k; j++) {
		cout << " " << L[j];
	}
	cout << endl;

	return 0;
}