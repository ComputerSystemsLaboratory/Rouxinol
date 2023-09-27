#include<cstdio>
const char N_MAX = 105;
short time=0;
bool matrix[N_MAX][N_MAX];
char n;
struct Node{
    char state;//0:undiscovered 1:active 2:end
    short stTime, endTime;
};
Node V[N_MAX];
char next(char num){
    for(char i=0;i<n;i++){
        if(matrix[num][i]&&V[i].state==0){
            return i;
        }
    }
    return -1;
}
void dfs(char num){
    if(num==-1) return;
    V[num].stTime = ++time;
    V[num].state = 1;
    for(char i=next(num); i!=-1;i=next(num)){
        dfs(i);
    }
    V[num].state = 2;
    V[num].endTime = ++time;
}
void buildMatrix(){
	for(char i=0; i<n;i++){
		int degree, index;
		scanf("%u%u", &index, &degree);
		for(char j=0; j<degree; j++){
			int temp;
			scanf("%d", &temp);
			matrix[index-1][temp-1] = true;
		}
	}
}
int main(){
    scanf("%d", &n);
    buildMatrix();
    for(char i=0; i<N_MAX; i++){
        if(V[i].state==0){
            dfs(i);
        }
    }
    for(char i=0;i<n;i++){
        printf("%d %d %d\n", i+1, V[i].stTime, V[i].endTime);
    }
    return 0;
}

