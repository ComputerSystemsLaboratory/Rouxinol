#include <iostream>
#include <cctype>
#include <stdio.h>
using namespace std;

char ch;
int main(){
	long long count[30] = {0};
	int num;
	while(scanf("%c",&ch) != EOF){
		if(islower(ch)){
			num = ch-'a';
		}else if(isupper(ch)){
			num = ch-'A';
		}else{
			continue;
		}
		count[num]++;
	}
	for(int i=0;i<=25;i++){
		printf("%c : %d\n",'a' + i,count[i]);
	}
}
