#include<cstdio>

int main(){
	int rank[] = {0,0,0};
	int t;
	for(int i = 0; i < 10 ; i++){
		scanf("%d", &t);
		if(t > rank[0]){
			rank[2] = rank[1];
			rank[1] = rank[0];
			rank[0] = t;
		}else if(t > rank[1]){
			rank[2] = rank[1];
			rank[1] = t;
		}else if(t > rank[2]){
			rank[2] = t;
		}
	}
	printf("%d\n%d\n%d\n", rank[0], rank[1], rank[2]);
	return 0;
}