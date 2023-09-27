#include <iostream>
#define ALPHABET 26

int main(){
	char c;
	int n[ALPHABET]={};
	while(std::cin>>c){
		if('A'<=c&&c<='Z'){
			c+=0x20;
		}
		if('a'<=c&&c<='z'){
			n[c-0x61]++;
		}
	}
	for(int i=0;i<ALPHABET;i++){
		std::cout<<char('a'+i)<<" : "<<n[i]<<std::endl;
	}
}