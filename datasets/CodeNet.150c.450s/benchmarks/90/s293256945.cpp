#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int num[101];
int big = 0;
int input;
int main(){
	for(int i=0; i <= 101; i++) num[i]=0;
	while(scanf("%d", &input) != EOF) num[input]++;
	for(int i=0; i <= 100; i++) big = max(big, num[i]);
	for(int i=0; i <= 100; i++) if(num[i] == big) cout << i << endl;
}