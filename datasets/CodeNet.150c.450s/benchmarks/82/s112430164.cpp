#include <iostream>
#include <cstring>
#include <sstream>
#include <cctype>
#include <cmath>
#include <cstdio>
using namespace std;
#define MPI  3.14159265358979323846

struct Dice{
	int num[6];
	void roll(int,int,int&);
};

void Dice::roll(int c1,int c2,int &ans){
	if (c1 == num[0]){
		if (c2 == num[1])ans = num[2];
		else if (c2 == num[2])ans = num[4];
		else if (c2 == num[3])ans = num[1];
		else if (c2 == num[4])ans = num[3];
		else cout << "error" << endl;
	}
	if (c1 == num[1]){
		if (c2 == num[0])ans = num[3];
		else if (c2 == num[2])ans = num[0];
		else if (c2 == num[3])ans = num[5];
		else if (c2 == num[5])ans = num[2];
		else cout << "error" << endl;
	}
	if (c1 == num[2]){
		if (c2 == num[0])ans = num[1];
		else if (c2 == num[1])ans = num[5];
		else if (c2 == num[4])ans = num[0];
		else if (c2 == num[5])ans = num[4];
		else cout << "error" << endl;
	}
	if (c1 == num[3]){
		if (c2 == num[0])ans = num[4];
		else if (c2 == num[1])ans = num[0];
		else if (c2 == num[4])ans = num[5];
		else if (c2 == num[5])ans = num[1];
		else cout << "error" << endl;
	}
	if (c1 == num[4]){
		if (c2 == num[0])ans = num[2];
		else if (c2 == num[2])ans = num[5];
		else if (c2 == num[3])ans = num[0];
		else if (c2 == num[5])ans = num[3];
		else cout << "error" << endl;
	}
	if (c1 == num[5]){
		if (c2 == num[1])ans = num[3];
		else if (c2 == num[2])ans = num[1];
		else if (c2 == num[3])ans = num[4];
		else if (c2 == num[4])ans = num[2];
		else cout << "error" << endl;
	}
}

int main(){

	Dice Dice1;

	for (int i = 0; i < 6; i++){
		cin >> Dice1.num[i];
	}

	int n;
	cin >> n;

	int ans[25];
	for (int i = 0; i < n; i++){
		int c1, c2;
		cin >> c1 >> c2;
		Dice1.roll(c1, c2, ans[i]);
	}

	for (int i = 0; i < n; i++){
		cout << ans[i] << endl;
	}

	return 0;
}
