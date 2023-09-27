#include <iostream>
#include <stdio.h>

int main(){
	while(true){
		char c;
		scanf("%c",&c);
		c+=('A'<=c&&c<='Z'?0x20:('a'<=c&&c<='z'?-0x20:0));
		std::cout<<c;
		if(c=='\n'){
			break;
		}
	}
	return 0;
}