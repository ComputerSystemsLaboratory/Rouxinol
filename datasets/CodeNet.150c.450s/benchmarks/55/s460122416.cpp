#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(void){
	char s[1001]={0};
	int sum=0;
	while(1){
		cin >>s;
		if(strcmp(&s[0], "0")==0){
			break;
		}
		for(int i=0; s[i]!='\0'; i++){
			sum+=(int)(s[i]-'0');
		}
		cout <<sum <<endl;
		sum=0;
	}
    return 0;
}