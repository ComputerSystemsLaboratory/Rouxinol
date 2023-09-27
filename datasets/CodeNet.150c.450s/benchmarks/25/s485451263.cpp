#include <cstdio>
#include <cctype>

int main(){
	char ch;
	int counter[26]={0};
	while( scanf("%c", &ch) != EOF ){
		if( isupper(ch) ) 
			ch = tolower(ch);
	
		if('a'<=ch && ch<='z') 
			++counter[ ch-'a' ];

	}

	for(int i=0; i<26; ++i)
		printf("%c : %d\n", 'a'+i, counter[i]);

	return 0;
}

