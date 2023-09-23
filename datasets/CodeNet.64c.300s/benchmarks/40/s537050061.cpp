#include<cstdio>
#include<cstring>
int main(void){
	char a[1500];
	for (int i = 0; scanf("%c", &a[i])!=EOF; i++){
		if (64< a[i] && a[i] <91 )printf("%c", a[i] + 32);
		else if (96< a[i] && a[i] <123)printf("%c", a[i] - 32);
		else printf("%c", a[i]);
	}

	return 0;
}