#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;
string bubble_sort(string, int, int&);
string select_sort(string, int, int&, int&);
string stringArrayToString(string*, int);

int main()
{
	string str;
	getline(cin, str);
	int num;
	stringstream num_ss(str);
	num_ss >> num;

	getline(cin, str);
	int counter = 0;
	int stability = 0;

	cout << bubble_sort(str, num, counter) << endl;
	cout << "Stable" << endl;
	cout << select_sort(str, num, counter, stability) << endl;
	cout << (stability == 0 ? "Stable" : "Not stable") << endl;
	return 0;
}
string bubble_sort(string str, int ary_size, int &counter) {
	string* ary = new string[ary_size];
	stringstream ss(str);
	string buff;
	int cnt = 0;
	while (getline(ss, buff, ' ')) {
		stringstream tss(buff);
		tss >> ary[cnt];
		cnt++;
	}

	// main.
	for (int j = ary_size - 2; j >= 0; j--) {
		for (int i = 0; i <= j; i++) {
			if (ary[i + 1][1] < ary[i][1]) {
				string tmp = ary[i];
				ary[i] = ary[i + 1];
				ary[i + 1] = tmp;
				counter++;
			}
		}
	}
	return stringArrayToString(ary, ary_size);
}

string select_sort(string str, int ary_size, int &counter, int &stability) {
	string* ary = new string[ary_size];
	stringstream ss(str);
	string buff;
	int cnt = 0;
	while (getline(ss, buff, ' ')) {
		stringstream tss(buff);
		tss >> ary[cnt];
		cnt++;
	}

	// main.
	// stability 0: stable, 1: not-stable

	for (int i = 0; i < ary_size; i++) {
		int min = i;
		int same_num_lst = -1;
		int stbl_flg = 0;

		for (int j = i + 1; j < ary_size; j++) {
			if (ary[i][1] == ary[j][1]) {
				stbl_flg = 1;
			}

			if (ary[min][1] > ary[j][1]) {
				min = j;
			} 
		}
		
		if (min != i) {
			string tmp = ary[min];
			ary[min] = ary[i];
			ary[i] = tmp;
			counter++;

			if (stbl_flg == 1) {
				stability = 1;
			}
		}
	}

	return stringArrayToString(ary, ary_size);
}
string stringArrayToString(string* ary, int ary_size) {
	string str = "";
	for (int i = 0; i < ary_size; i++) {
		if (i == ary_size - 1) {
			str += ary[i];
		}
		else {
			str += ary[i] + " ";
		}
	}
	return str;
}