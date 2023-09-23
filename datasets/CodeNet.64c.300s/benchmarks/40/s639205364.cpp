#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>

using namespace std;

int main(){
	char a;
	for(int i=0;;i++){
		scanf("%c",&a);
		if(a=='\n')break;
		if( isupper(a)){
			printf("%c",tolower(a));
		}else if(islower(a)){
			printf("%c",toupper(a));
		}else{
			printf("%c",a);
		}
	}
	cout << endl;
	return 0;
}