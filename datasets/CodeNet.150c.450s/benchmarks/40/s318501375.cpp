#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	struct data {
		int d[7];
	} dice;
	char command[101];
	int i, j, tmp;

	for(i=1;i<=6;i++)
		scanf("%d", &dice.d[i]);
	scanf("%s", command);

	for(i=0;command[i] != '\0';i++){
		switch(command[i]){
			case 'E' :	tmp = dice.d[3];
						dice.d[3] = dice.d[1];
						dice.d[1] = dice.d[4];
						dice.d[4] = dice.d[6];
						dice.d[6] = tmp;
						break;
			case 'N' :	tmp = dice.d[5];
						dice.d[5] = dice.d[1];
						dice.d[1] = dice.d[2];
						dice.d[2] = dice.d[6];
						dice.d[6] = tmp;
						break;
			case 'S' :	tmp = dice.d[2];
						dice.d[2] = dice.d[1];
						dice.d[1] = dice.d[5];
						dice.d[5] = dice.d[6];
						dice.d[6] = tmp;
						break;
			case 'W' :	tmp = dice.d[4];
						dice.d[4] = dice.d[1];
						dice.d[1] = dice.d[3];
						dice.d[3] = dice.d[6];
						dice.d[6] = tmp;
						break;
		}
//	printf("%d\n", dice.d[1]);
	}

	printf("%d\n", dice.d[1]);

	return 0;
}