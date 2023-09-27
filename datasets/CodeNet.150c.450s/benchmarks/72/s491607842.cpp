#include <cstdio>

int main(){
	char ch;
	
	for(;;){
		scanf("%c", &ch);
		if(ch >= 'a' && ch <= 'z'){
			ch -= 'a' - 'A';
		}else if(ch >= 'A' && ch <= 'Z'){
			ch += 'a' - 'A';
		}
		printf("%c", ch);
		if(ch == '\n') break;
	}
	
	return 0;
}