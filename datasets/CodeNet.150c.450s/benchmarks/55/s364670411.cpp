#define MAXSIZE 1000

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char init_str[MAXSIZE]={};


int main()
{
	char str[MAXSIZE];
	int sum;

	while(1){
		strcpy(str,init_str);
		scanf("%s",&str);
		if((int)(str[0]-'0')!=0){
			sum=0;
			for(int i=0;(i<MAXSIZE&&(str[i]!='\0'));i++){
				sum += (int)(str[i]-'0');
			}
			cout << sum << endl;
		}
		else break;
	}
	return 0;
}

