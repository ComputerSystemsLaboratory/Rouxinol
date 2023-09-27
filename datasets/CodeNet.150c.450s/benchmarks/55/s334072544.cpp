#include <iostream>
#include <stdio.h>

int main(){
	while(true){
		int result=0;
		char c;
		while(true){
			scanf("%c",&c);
			if(result==0&&c=='0'){
				break;
			}
			if(c=='\n'){
				break;
			}
			result+=c-0x30;
		}
		if(result==0&&c=='0'){
				break;
		}
		std::cout<<result<<std::endl;
	}
	return 0;
}