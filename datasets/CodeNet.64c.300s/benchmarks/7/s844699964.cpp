#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>


#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;


int main(void) {
	int num = 0;
	string pair_str[52];
	int pair_num[52];
	bool S_set[13] = {};
	bool H_set[13] = {};
	bool C_set[13] = {};
	bool D_set[13] = {};

	CI num;

	for (int i = 0; i < num; ++i) {
		CI pair_str[i];
		CI pair_num[i];
		if (pair_str[i] == "S") {
			S_set[pair_num[i] - 1] = 1;
		}
		if (pair_str[i] == "H") {
			H_set[pair_num[i] - 1] = 1;
		}
		if (pair_str[i] == "C") {
			C_set[pair_num[i] - 1] = 1;
		}
		if (pair_str[i] == "D") {
			D_set[pair_num[i] - 1] = 1;
		}
	}
	for (int i = 0; i < 13; ++i) {
		if (S_set[i] == 0) {
			CO "S" << " " << i + 1 E
		}
	}
	for (int i = 0; i < 13; ++i) {
		if (H_set[i] == 0) {
			CO "H" << " " << i + 1 E
		}
	}
	for (int i = 0; i < 13; ++i) {
		if (C_set[i] == 0) {
			CO "C" << " " << i + 1 E
		}
	}
	for (int i = 0; i < 13; ++i) {
		if (D_set[i] == 0) {
			CO "D" << " " << i + 1 E
		}
	}
	
}