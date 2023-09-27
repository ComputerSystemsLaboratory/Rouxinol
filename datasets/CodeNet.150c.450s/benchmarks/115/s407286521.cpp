#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class LCS{
private:	
	char x[1000 + 1];
	char y[1000 + 1];
	int lcs[1000][1000];
public:
	LCS(const char x[], const char y[]);
	int calcLCS();
	int calcLCS(int i, int j);
};

LCS::LCS(const char x[], const char y[])
{
	strcpy(this->x, x);
	strcpy(this->y, y);
	for (int i = 0; (this->x)[i] != '\0'; i++) {
		for (int j = 0; (this->y)[j] != '\0'; j++) {
			lcs[i][j] = -1;
		}
	}
}

int LCS::calcLCS(){
	int i, j;
	for (i = 0; ; i++) {
		if (x[i + 1] == '\0') break;
	}
	for (j = 0; ; j++) {
		if (y[j + 1] == '\0') break;
	}
	return calcLCS(i, j);
}

int LCS::calcLCS(int i, int j)
{
	if (i < 0 || j < 0) return 0;

	if (lcs[i][j] != -1) return lcs[i][j];

	if (x[i] == y[j]) lcs[i][j] = calcLCS(i - 1, j - 1) + 1;
	else lcs[i][j] = max(calcLCS(i, j - 1), calcLCS(i - 1, j));
	return lcs[i][j];
}

int main(void)
{
	int q;
	cin >> q;
	cin.ignore(1);
	for (int i = 0; i < q; i++) {
		char x[1000 + 1] = "\0";
		char y[1000 + 1] = "\0";
		cin.getline(x, 1000 + 1);
		cin.getline(y, 1000 + 1);
		LCS *lcs = new LCS(x, y);
		cout << lcs->calcLCS() << endl;
		delete lcs;
	}

	return 0;
}