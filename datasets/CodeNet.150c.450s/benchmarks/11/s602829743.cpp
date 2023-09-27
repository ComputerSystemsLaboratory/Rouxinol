#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);

	char mark[n];
	int rank[n];

	for(int i = 0; i < n; i++){
		scanf("%s %d", &mark[i], &rank[i]);
	}

	int buff_S[13] = {0}, buff_H[13] = {0}, buff_C[13] = {0}, buff_D[13] = {0};

	for(int i = 0; i < n; i++){

		if (mark[i] == 'S'){

			for(int j = 1; j <= 13; j++){

				if(rank[i] == j) buff_S[j - 1] = 1;
			}
		}

		else if (mark[i] == 'H'){

			for(int j = 1; j <= 13; j++){

				if(rank[i] == j) buff_H[j - 1] = 1;
			}
		}

		else if (mark[i] == 'C'){

			for(int j = 1; j <= 13; j++){

				if(rank[i] == j) buff_C[j - 1] = 1;
			}
		}

		else if (mark[i] == 'D'){

			for(int j = 1; j <= 13; j++){

				if(rank[i] == j) buff_D[j - 1] = 1;
			}
		}
	}

	for(int i = 0; i < 13; i++){
		if (buff_S[i] == 0) printf("S %d\n", i + 1);
	}
	for(int i = 0; i < 13; i++){
		if (buff_H[i] == 0) printf("H %d\n", i + 1);
	}
	for(int i = 0; i < 13; i++){
		if (buff_C[i] == 0) printf("C %d\n", i + 1);
	}
	for(int i = 0; i < 13; i++){
		if (buff_D[i] == 0) printf("D %d\n", i + 1);	
	}
	return 0;
}