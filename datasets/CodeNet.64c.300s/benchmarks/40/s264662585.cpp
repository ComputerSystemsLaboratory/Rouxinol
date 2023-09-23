#include <cstdio>
#include <cctype>

int main(){
	char A;
	int i=0;

	while(i<1200){
		scanf("%c",&A);
		char S;		
		if(isalpha(A)){
			if(islower(A))S=toupper(A);
			else S=tolower(A);
			printf("%c",S);
		}
        else printf("%c",A);
		++i;
		if(A=='\n')break;           
	}

	return 0;
}