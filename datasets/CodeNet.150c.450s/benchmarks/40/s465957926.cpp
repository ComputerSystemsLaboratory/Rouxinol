#include<cstdio>

int main(){
	int dice[6];
	int pre[6];
	int pt[5][6] = {	{5,1,3,4,6,2}, 
				 	{0,0,0,0,0,0},
					{4,2,1,6,5,3},
					{2,6,3,4,1,5},
					{3,2,6,1,5,4}};
	char c;
	scanf("%d %d %d %d %d %d", &dice[0], &dice[1], &dice[2], &dice[3], &dice[4], &dice[5]);
	scanf("%c", &c);
	scanf("%c", &c);
	int x;
	while(c - 10){
		for(int i = 0; i < 6; i++){
			pre[i] = dice[i];
		}
		for(int i = 0; i < 6; i++){
			x = pt[(c - 3) % 8][i];
			dice[i] = pre[x - 1];
		}
		scanf("%c", &c);
	}
	printf("%d\n", dice[0]);
	return 0;
}