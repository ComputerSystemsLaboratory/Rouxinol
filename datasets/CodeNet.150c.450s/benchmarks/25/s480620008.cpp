#include <cstdio>
#include <cctype>

int main(){
	int i=0, a[26]={0};
	char ch;
	
	while( scanf("%c", &ch) != EOF ){
		if( isupper(ch) ) 
			ch = tolower(ch);
	
		if('a'<=ch && ch<='z') 
			++a[ ch-'a' ];
	
		++i;
	}

	for(int x=0; x<26; ++x)
		printf("%c : %d\n", 'a'+x, a[x]);

	return 0;
}

