#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

struct data {
	int d[7];
} dice;

int search(int a)
{
	int i;

	for(i=1;i<=6;i++){
		if(dice.d[i] == a)
			return i;
	}
}

int main(void)
{
	int q;
	int i, j, tmp, a, b;


	for(i=1;i<=6;i++)
		scanf("%d", &dice.d[i]);
	scanf("%d", &q);

	for(i=0;i<q;i++){
		scanf("%d %d", &a, &b);

		
		switch(search(a)){
			case 4 :	tmp = dice.d[3];
						dice.d[3] = dice.d[1];
						dice.d[1] = dice.d[4];
						dice.d[4] = dice.d[6];
						dice.d[6] = tmp;
						break;
			case 2 :	tmp = dice.d[5];
						dice.d[5] = dice.d[1];
						dice.d[1] = dice.d[2];
						dice.d[2] = dice.d[6];
						dice.d[6] = tmp;
						break;
			case 5 :	tmp = dice.d[2];
						dice.d[2] = dice.d[1];
						dice.d[1] = dice.d[5];
						dice.d[5] = dice.d[6];
						dice.d[6] = tmp;
						break;
			case 3 :	tmp = dice.d[4];
						dice.d[4] = dice.d[1];
						dice.d[1] = dice.d[3];
						dice.d[3] = dice.d[6];
						dice.d[6] = tmp;
						break;
			case 6 :	tmp = dice.d[6];
						dice.d[6] = dice.d[1];
						dice.d[1] = tmp;
						tmp = dice.d[3];
						dice.d[3] = dice.d[4];
						dice.d[4] = tmp;
						break;
		}

		while(dice.d[2] != b){
			tmp = dice.d[2];
			dice.d[2] = dice.d[3];
			dice.d[3] = dice.d[5];
			dice.d[5] = dice.d[4];
			dice.d[4] = tmp;
		}

		printf("%d\n", dice.d[3]);
	}

	return 0;
}