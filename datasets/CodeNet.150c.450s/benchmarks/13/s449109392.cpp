#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(void){
	char cha1[1000], cha2[1000], a[1000];
	cin >> cha1;
	cin >> a;
	strcpy(cha2, cha1);
	strcat(cha1, cha2);
	if (strstr(cha1, a) != NULL){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}