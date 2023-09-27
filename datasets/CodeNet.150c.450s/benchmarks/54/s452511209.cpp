#include<cstdio>
#include<cstring>
int main(void){
	char a[1010];
	int b;
	char c[20];
	int d;
	int z;
	int x;
	x = 0;
	for (int i = 0; i < 1010; i++)a[i] = 0;
	for (int i = 0; i < 20; i++)c[i] = 0;
	scanf("%s", c);
	d = strlen(c);
	for (;;){
		scanf("%s", a);
		if (a[0]=='E'&&a[1]=='N'&& a[9]=='X'&&a[10]=='T')break;
		b = strlen(a);
		if (b == d){
			z = 0;
			for (int i = 0; i < d; i++){
				if ((a[i]-c[i]+32)%32==0)z++;
			}
			if (z == d)x++;
		}
		for (int i = 0; i < b; i++)a[i] = 0;
	}
	printf("%d\n",x);

	return 0;
}