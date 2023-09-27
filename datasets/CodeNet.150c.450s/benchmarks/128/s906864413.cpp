#include<iostream>
#include<string>
using namespace std;

#define MAX 256

int main(void){
	int i;
	int l = 0;
	char str[21];
	char str1[21];
	cin >> str;
	for (i = 0; str[i] != '\0'; i++){
	}
	for (int k = i-1; k>=0;l++,k--){
		cout << str[k];
	}
	cout << endl;
	
	return 0;
}