#include<cstdio>

int main(){
	char cards[400];
	int c, s, i;
	char t;

	while(true){
		i = 0;
		scanf("%c", &t);
		if(t == '-'){
			return 0;
		}
		while(t - 10){
			cards[i] = t;
			i++;
			scanf("%c", &t);
		}

		for (int j = 0; j < i; j++)
		{
			cards[j + i] = cards[j];
		}

		scanf("%d", &c);
		int sum = 0;
		for(int j = 0; j < c ; j++){
			scanf("%d", &s);
			sum += s;
		}
		sum %= i;
		scanf("%c", &t);
		for(int j = 0; j < i ; j++){
			printf("%c", cards[j + sum]);
		}
		printf("\n");
	}
}