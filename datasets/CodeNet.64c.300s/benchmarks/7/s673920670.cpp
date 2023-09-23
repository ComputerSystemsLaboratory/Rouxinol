#include<cstdio>

int main(){
	int n;
	int x;
	char c;
	char m[] = {'S', 'H', 'C', 'D'};

	int cards[4][14];

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 14; j++){
			cards[i][j] = 0;
		}
	}

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf(" %c %d", &c, &x);
		cards[(c - 53) % 6][x] = 1;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 1; j < 14; j++){
			if(!cards[i][j]){
				printf("%c %d\n", m[i], j);
			}
		}
	}
	return 0;
}