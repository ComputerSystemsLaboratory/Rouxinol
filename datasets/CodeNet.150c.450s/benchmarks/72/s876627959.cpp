#include<iostream>
#include<cstdio>
#include<string>00
using namespace std;

int main(){
	char ch, ch2;
	
	while(1){
		scanf("%c", &ch);
		
		if(islower(ch)){
			ch2 = toupper(ch);
			cout << ch2;
		}else{
			ch2 = tolower(ch);
			cout << ch2;
		}
		
		if(ch == '\n'){
			break;
		}
	}
		
	return 0;
}