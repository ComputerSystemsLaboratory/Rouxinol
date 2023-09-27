#include<stdio.h>

int main(){
	const int CASH = 1000;
	int price;
	int hundred;
	int ten;
	int digit;
	int count;

	while( 1 ) {

		count = 0;

		scanf( "%d",&price );
		if( !price ) break;

		price = CASH - price;

		hundred = price / 100;
		ten = ( price - hundred * 100 ) / 10;
		digit = price - ( hundred * 100 ) - (ten * 10);

		while( hundred > 0 ){
			if( hundred >= 5 ){
				hundred -= 5;
				count++;
			}else{
				hundred--;
				count++;
			}
		}

		while( ten > 0 ){
			if( ten >= 5 ){
				ten -= 5;
				count++;
			}else{
				ten--;
				count++;
			}
		}

		while( digit > 0 ){
			if( digit >= 5 ){
				digit -= 5;
				count++;
			}else{
				digit--;
				count++;
			}
		}

		printf("%d\n",count);

	}
	return 0;
}