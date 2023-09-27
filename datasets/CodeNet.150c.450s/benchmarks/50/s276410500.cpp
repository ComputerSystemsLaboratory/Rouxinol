#include <stdio.h>

int main(void)
{
	int num;
	int ans;
	int price;
	
	while (1){
		scanf("%d", &price);
		
		if (price == 0)break;
		
		price = 1000 - price;
		
		ans = 0;
		while (price){
			if (price - 500 >= 0){
				price -= 500;
				ans++;
			}
			else if (price - 100 >= 0){
				price -= 100;
				ans++;
			}
			else if (price - 50 >= 0){
				price -= 50;
				ans++;
			}
			else if (price - 10 >= 0){
				price -= 10;
				ans++;
			}
			else if (price - 5 >= 0){
				price -= 5;
				ans++;
			}
			else if (price - 1 >= 0){
				price -= 1;
				ans++;
			}
		}
		
		printf("%d\n", ans);
	}
	
	return (0);
}