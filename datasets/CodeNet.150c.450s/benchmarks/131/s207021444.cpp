#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

// http://d.hatena.ne.jp/pogin/20121001/1349069143
inline int toInt(string s) {
	int v;
	istringstream sin(s);
	sin >> v;
	return v;
}

template<class T> inline string toString(T x) {
	ostringstream sout;
	sout << x;
	return sout.str();
}

int is_same_value(int n, int a[], int max) {
	for (int i = 0; i < max; i++) {
		if(a[i] == n) {
			return i;
		}
	}
	
	return -1;
}

int main() {
	while (true) {
		string tmp;
		int L;
		int a[21];
		int n = 0;
		cin >> tmp >> L;
		if (L == 0) {
			break;
		}

		for (int i = 0; i < 21; i++) {
			a[i] = 0;
		}
		int a0_length = tmp.length();
		if (a0_length < L) {
			for (int i = a0_length; i < L; i++) {
				tmp.insert(0, "0");
			}
		}
		//cout << "a0: " << tmp << endl;
		a[0] = toInt(tmp);
		
		while (true) {
			n++;
			string min = tmp;
			sort(min.begin(), min.end());
			string max = min;
			reverse(max.begin(), max.end());
			//cout << "max: " << max << " min: " << min << endl;
			int next = toInt(max) - toInt(min);
			a[n] = next;
			//cout << "a" << n << ": " << a[n] << endl;
			int j = is_same_value(a[n], a, n);
			if (j != -1) {
				cout << j << " " << a[n] << " " << n - j << endl;
				break;
			}
			tmp = toString<int>(next);
			for (int i = tmp.length(); i < L; i++) {
				tmp.insert(0, "0");
			}
		}
	}
	
	return 0;
}