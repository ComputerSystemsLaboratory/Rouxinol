#include<cstdio>
#include<cstring>

int main(){
	char str[201], t[101], p[101];

	scanf("%s", str);
        scanf("%s", p);
	strcpy(t, str);
	strcat(str, t);

	if (strstr(str, p) == NULL) printf("No\n");
	else printf("Yes\n");

	return 0;
}