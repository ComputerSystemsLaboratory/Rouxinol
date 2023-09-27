#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char ch,c, sh[26] = { 'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int counter[26] = { 0 };
	while (scanf("%c", &c) != EOF){
		ch=tolower(c);
		if (islower(ch)){
			int num = ch - 'a';
			counter[num]++;
		}
	}
	for (int i=0; i < 26; i++){
		printf("%c : %d\n",sh[i],counter[i]);
	}
	return 0;
}