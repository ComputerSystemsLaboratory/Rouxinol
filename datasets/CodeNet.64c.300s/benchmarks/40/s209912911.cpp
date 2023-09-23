#include<iostream>
#include<cctype>
#include<stdio.h>
using namespace std;

int main(){
	char ch[1200];
	int i=0;

	while (1){
		i++;
		scanf("%c", &ch[i]);

		if (isupper(ch[i])){
			ch[i] = tolower(ch[i]);
		}
		else if (islower(ch[i])){
			ch[i] = toupper(ch[i]);
		}

		if (ch[i] == '\n')break;
		cout << ch[i];
	}

	cout << endl;


	return 0;
}