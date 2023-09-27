#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int price;
	int num[5] = {0};
	int i = 0;

	while (1){
		scanf("%d", &price);

		if (price != 0){
			price = 1000 - price;

			if (price / 500 != 0){
				num[i] += (price / 500);
				price -= (price / 500) * 500;	
			}
			if (price / 100 != 0){
				num[i] += (price / 100);
				price -= (price / 100) * 100;
			}
			if (price / 50 != 0){
				num[i] += (price / 50);
				price -= (price / 50) * 50;
			}
			if (price / 10 != 0){
				num[i] += (price / 10);
				price -= (price / 10) * 10;
			}
			if (price / 5 != 0){
				num[i] += (price / 5);
				price -= (price / 5) * 5;
			}
			if (price / 1 != 0){
				num[i] += price;
			}
		}
		else {
			break;
		}
		i++;
	}

	for (int i = 0; num[i] >= 1; i++){
		printf("%d\n", num[i]);
	}

}