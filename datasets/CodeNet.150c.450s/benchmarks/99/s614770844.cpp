#include <cstdio>
#include <cstdlib>
//#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <set>
using namespace std;

int main(void){

	char str1[50], str2[50];
	
	int n; cin >> n;

	for (int m = 0; m < n; m++){
		cin >> str1 >> str2;

		int len1 = strlen(str1);
		int len2 = strlen(str2);

		int num1 = 0, num2 = 0, buff = 1;

		for (int i = 0; i < len1; i++){
			switch (str1[i]){
			case 'm': num1 += buff * 1000;
				buff = 1;
				break;
			case 'c': num1 += buff * 100;
				buff = 1;
				break;
			case 'x': num1 += buff * 10;
				buff = 1;
				break;
			case 'i': num1 += buff;
				buff = 1;
				break;
			default: buff = str1[i] - '0';
			}
		}

		for (int i = 0; i < len2; i++){
			switch (str2[i]){
			case 'm': num2 += buff * 1000;
				buff = 1;
				break;
			case 'c': num2 += buff * 100;
				buff = 1;
				break;
			case 'x': num2 += buff * 10;
				buff = 1;
				break;
			case 'i': num2 += buff;
				buff = 1;
				break;
			default: buff = str2[i] - '0';
			}
		}

		//cout << "num1:" << num1 << endl;
		//cout << "num2:" << num2 << endl;

		int num = num1 + num2;

		switch (num / 1000){
		case 0: break;
		case 1: cout << 'm';
			break;
		default: cout << (num / 1000) << 'm';
		}

		switch ((num / 100) % 10){
		case 0: break;
		case 1: cout << 'c';
			break;
		default: cout << (num / 100) % 10 << 'c';
		}

		switch ((num / 10) % 10){
		case 0: break;
		case 1: cout << 'x';
			break;
		default: cout << (num / 10) % 10 << 'x';
		}

		switch (num % 10){
		case 0: break;
		case 1: cout << 'i';
			break;
		default: cout << num % 10 << 'i';
		}

		cout << endl;
	}

	return 0;
}

/*
for(i=0;i<N;i++){
cin >> X[i];
}


for(i=0;i<N;i++){
for(j=0;j<N;j++){
cin >> X[i][j];
}
}
*/