#include<cstdio>
#include<cctype>

int main(void){
	
	char ch;
	
	while(1) {
		scanf("%c", &ch);
		if ( isalpha(ch) ) {
			if (islower(ch)){
				ch = toupper(ch);
				printf("%c", ch);
			}
			else{
				ch = tolower(ch);
				printf("%c", ch);
			}
		}
		else {
			printf("%c", ch);
		}
		if ( ch == '\n') break;
	}
	
	return 0;
}