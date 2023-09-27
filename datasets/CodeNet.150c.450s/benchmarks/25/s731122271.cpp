#include<cstdio>
#include<cctype>

int main(){
	int counter[26];
	char ch;

	for (int i = 0; i < 26; i++)
		counter[i] = 0;

	while (scanf("%c", &ch) != EOF){
		ch = tolower(ch);
		if (isalpha(ch))
			counter[ch - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		printf("%c : %d\n", i + 'a', counter[i]);
	
	return 0;
}