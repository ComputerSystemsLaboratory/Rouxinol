#include<cstdio>
#include<cstring>
int main(void){
	char a[1500];
	int b;
	int c[30];
	for (int i = 0; i < 1500; i++)a[i] = 0;
	for (int i = 0; i < 30; i++)c[i] = 0;
	for (; scanf("%s", a) != EOF;){
		b = strlen(a);
		for (int i = 0; i < b; i++){
			if (a[i] > 96)c[a[i] - 97]++;
			else c[a[i] - 65]++;
		}
		for (int i = 0; i < b; i++)a[i] = 0;
	}
	for (int i = 0; i < 26; i++)printf("%c : %d\n", i + 97, c[i]);

	return 0;
}