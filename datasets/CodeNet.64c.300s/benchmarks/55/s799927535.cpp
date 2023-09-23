#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int i = 0;
	while(true){
		i++;
		int temp;
		scanf("%d", &temp);
		if(temp == 0){
			break;
		}else{
			printf("Case %d: %d\n", i, temp);
		}
	}
	return 0;
}