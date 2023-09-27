#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

//I can't understand,so I imitated yutaka watabe's book.
//I think this problem has 5 star rank difficulty.

void calc(char X[],char Y[]){
	int X_length=0,Y_length=0;
	int table[1001][1001];
	for(int i = 0; i < 1001; i++){
		for(int k = 0; k < 1001; k++)table[i][k] = 0;
	}
	for(int i = 0; X[i] != '\0'; i++)X_length++;
	for(int i = 0; Y[i] != '\0'; i++)Y_length++;
	int max_succeed = 0;
	for(int i = 0; i < X_length; i++){
		for(int k = 0; k < Y_length; k++){
			if(X[i] == Y[k]){
				table[i+1][k+1] = table[i][k] + 1;
			}else{
				table[i+1][k+1] = max(table[i+1][k],table[i][k+1]);
			}
			max_succeed = max(max_succeed,table[i+1][k+1]);
		}
	}
	printf("%d\n",max_succeed);
}

int main(){
	int q;
	char X[1001],Y[1001];
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%s %s",X,Y);
		calc(X,Y);
	}
    return 0;
}