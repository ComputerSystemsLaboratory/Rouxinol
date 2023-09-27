#include <stdio.h>

int main()
{
	int n;
	int i;
	int debt = 100000;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		debt = (int)(debt * 1.05);
		if(debt % 1000 != 0){
			debt = (int)(debt / 1000) * 1000 + 1000;
		}
	}
	printf("%d\n",debt);
	return 0;
}