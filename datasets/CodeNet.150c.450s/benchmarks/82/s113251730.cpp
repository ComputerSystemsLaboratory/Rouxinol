#include<cstdio>

int main(){
	int dice[6];
	int a,b,x,y,q,t = 0;
	int ans[6][6] = {{0,3,5,2,4,0},{4,0,1,6,0,3},{2,6,0,0,1,5},{5,1,0,0,6,2},{3,0,6,1,0,4},{0,4,2,5,3,0}};
	
	scanf("%d %d %d %d %d %d", &dice[0], &dice[1], &dice[2], &dice[3], &dice[4], &dice[5]);
	scanf("%d", &q);
	
	for(int i = 0; i < q; i++){
		scanf("%d %d", &a, &b);
		while(a - dice[t]){
			t++;
		}
		a = t;
		t = 0;
		while(b - dice[t]){
			t++;
		}
		b = t;
		t = 0;
		
		printf("%d\n", dice[ans[a][b] - 1]);
	}

}