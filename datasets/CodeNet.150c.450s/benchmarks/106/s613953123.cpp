#include<stdio.h>
int main()
{
	int a, b, c, i;
	int syou, amari, kosuu = 0;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = a; i <= b; i = i + 1){
		syou = c / i;
		amari = c%i;
		if (amari == 0){
			kosuu = kosuu + 1;
		}
		else;

	}
	printf("%d\n", kosuu);
	return 0;
}