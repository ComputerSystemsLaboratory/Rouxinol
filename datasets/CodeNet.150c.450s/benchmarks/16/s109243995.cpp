#include <iostream>
#include <string>
using namespace std;

struct mountain {
	int top = 0; int topn; int dis = 0;
};

string s; mountain m[10000]; int area[10000] = { 0 }, ff = 1, wind = 0;

int disp(int num) {
	int aa = 0, fff = 0, j = 0;
	for (int i = 0; i < num; i++)aa += area[i];
	if (!area[num - 1])num--;
	if (!area[0])num--, fff = 1, j++;
	if (num <= 0) num = 0;
	cout << aa << endl << num;
	if (0 < num) {
		if (j)num++;
		for (j; j < num; j++) cout << " " << area[j];
	}
	cout << endl;
	return 0;
}

int calc(int act, int *num) {
	int begin = *num - 1, lis = 0;
	for (begin; begin >= 0 && act > m[begin].top; begin--) {
		if (act - 1 == m[begin].top) lis++;
	}
	if (ff || begin == -1) return 1;

	int d = m[begin].dis, max = m[begin].top;
	for (int i = m[begin].topn; max >= act; i++) {
		if (s[i] == '\\')max--, d--;
		if (s[i] == '_')d--;
	}
	area[*num - 1] += d + 1;

	for (int i = *num - 1; i > *num - lis - 1; i--) {
		area[*num - 1 - lis] += area[i];
		area[i] = 0;
		m[i].dis = 0;
	}
	*num -= lis;

	return 1;
}

int main() {
	int num = 1, act = 0, flag = 0;
	m[0].topn = 0; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '/') {
			act++;
			flag = calc(act, &num);
			m[num].top = act;
			m[num].topn = i + 1;
			wind = 1;
		}
		if (s[i] == '_')m[num].topn = i + 1;
		if (s[i] == '\\') {
			if (flag)num++, flag = 0;
			ff = 0, act--, wind = 1;
		}
		if (i == s.size() - 1 && !wind)num++;
		for (int j = 0; j < num;j++)m[j].dis++;
	}
	disp(num);

	return 0;
}