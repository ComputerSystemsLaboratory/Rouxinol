#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	while (true){
		int i,S=0;
		char x[1000] = { 0 };
		cin >> x;
		for (i = 0; i < 1000; i++){
			if (x[i] == '\n'){ break; }
			switch (x[i]){
				case '0':S = S + 0;
					break;
				case '1':S = S + 1;
					break;
				case '2':S = S + 2;
					break;
				case '3':S = S + 3;
					break;
				case '4':S = S + 4;
					break;
				case '5':S = S + 5;
					break;
				case '6':S = S + 6;
					break;
				case '7':S = S + 7;
					break;
				case '8':S = S + 8;
					break;
				case '9':S = S + 9;
					break;
			}
		}
		if (S == 0){ break; }
		cout << S << endl;
	}
	return 0;
}