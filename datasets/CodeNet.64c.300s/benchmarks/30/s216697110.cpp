#include <bits/stdc++.h>
using namespace std;


int main() {
	int coin[6]={500,100,50,10,5,1},price,sum;
	while (true)
	{
	    scanf("%d",&price);
		if (price == 0) break;
		sum =0;
		price = 1000-price;
		for (int i = 0; i <= 5; i++)
		{
				while (price>=coin[i]) {
					price-=coin[i];
					sum++;
				}



		}
		printf("%d\n", sum);
	}




	
	return 0;
}
