#include <iostream>
#include <stdio.h>

using namespace std;
 
int main(){

	int sum,i;
	char number[1001];
	
	while(1){
		scanf("%s",number);
		sum=0;
		if (number[0]=='0') break;
		for(i=0;i<1000;i++){
			if(number[i] == '\0') break;
			sum = sum + number[i]-'0';
		}
		cout << sum << endl;
	}
	
    return 0;
}