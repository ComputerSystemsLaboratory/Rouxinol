#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <queue>

using namespace std;

const char *X, *Y;
int X_length, Y_length;
bool alreadySeenTable[256];
int table_lcs[1001][1001];

int lcs(int x_begin, int y_begin) {
	int i, j, to;
	int max = 0;
	int v_lcs;
	
	if (table_lcs[x_begin][y_begin] != -1) {
		return table_lcs[x_begin][y_begin];
	}
	
	for (i = 0; i < 256; i++) {
		alreadySeenTable[i] = false;
	}
	i = x_begin;
	j = y_begin;
	to = Y_length-1;
	while(i <= X_length-1) {
		bool found = false;
		while (j <= to) {
			if (X[i] == Y[j]) {
				v_lcs = lcs(i + 1, j + 1) + 1;
				if (v_lcs > max) {
					max = v_lcs;
				}
				found = true;
				break;
			}
			else {
				j++;
			}
		}
		if (found == false) {
			i++;
			j = y_begin;
		}
		else {
			i++;
			to = j - 1;
			j = y_begin;
		}
	}
	return table_lcs[x_begin][y_begin] = max;
}

int main() {

	int N;
	cin >> N;
	string stringX, stringY;

	for (int i = 1; i <= N; i++) {
		for (int i = 0; i < 1001; i++) {
			for (int j = 0; j < 1001; j++) {
				table_lcs[i][j] = -1;
			}
		}
		cin >> stringX >> stringY;
		X = stringX.c_str();
		X_length = stringX.size();
		Y = stringY.c_str();
		Y_length = stringY.size();
		printf("%d\n", lcs(0, 0));
	}
	return 0;
}