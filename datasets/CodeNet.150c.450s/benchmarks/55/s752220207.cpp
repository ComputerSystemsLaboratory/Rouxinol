#include<cstdio>
#include<cstring>
int main(void){
	char a[1500];
	int s = 1;
	for (; s != 0;){
		s = 0;
		scanf("%s", a);
		for (int i = 0; i < strlen(a); i++)s = s + a[i] - 48;
		if(s!=0) printf("%d\n", s);
	}
	return 0;
}