#include<iostream>
#include<ctype.h>
#include<stdio.h>
using namespace std;
int main(){
	int i = 0;
	char key;
	char a[1200];
	while (scanf("%c", &key) != EOF){
		if (islower(key)){
			key = toupper(key);
		}
		else if (isupper(key)){
			key = tolower(key);
		}
		a[i] = key;
		i++;
	}
	for (int i2 = 0; i2 < i - 1; i2++){
		cout << a[i2];
	}
	cout << endl;
}