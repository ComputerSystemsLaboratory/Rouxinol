#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
	
	char s;
	
	while(1){
		scanf("%c", &s);
		if(islower(s) != 0){
			s = toupper(s);
		}else if(isupper(s) != 0){
			s = tolower(s);
		}
		printf("%c", s);
		if(s == '\n')break;
	}
	
	return 0;
}