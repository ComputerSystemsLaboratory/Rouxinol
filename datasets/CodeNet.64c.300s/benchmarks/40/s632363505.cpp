#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;

const int ch_MAX = 1200;
char ch[ch_MAX],CH[ch_MAX];

int input(){
	int length = 0;
	for (;; length++){
		scanf("%c",&ch[length]);
		if (ch[length] == '\n')break;
	}
	return length;
}

void changeCH(int length){
	for (int i = 0; i < length; i++){
		bool flag = islower(ch[i]);
		if (flag==true)CH[i] = toupper(ch[i]);
		else CH[i] = tolower(ch[i]);
		cout << CH[i];
	}
	cout << endl;
}

int main(){
	int length;
	
	length = input();

	changeCH(length);

	return 0;
}
