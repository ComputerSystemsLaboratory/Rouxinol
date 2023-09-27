#include<cstdio>
#include<queue>
using namespace std;
const char N_MAX = 105;
bool matrix[N_MAX][N_MAX];
char n;
char length = 0;
queue<char> que;
struct Node{
    char state;//0:undiscovered 1:active 2:end
    char path;
};
Node V[N_MAX];
char next(char num, char found){
    for(char i=found;i<n;i++){
        if(matrix[num][i]&&V[i].state==0){
            return i;
        }
    }
    return -1;
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

void bfs() {
    que.push(0);
    V[0].path = length = 0;
    V[0].state = 1;
    while(!que.empty()) {
        char active = que.front();
        char nex = next(active, 0);
        while(nex != -1) {
            que.push(nex);
            V[nex].path = V[active].path+1;
            V[nex].state = 1;
            nex = next(active, nex + 1);
        }
        V[active].state = 2;
        que.pop();
    }
}

int main(){
    scanf("%d", &n);
    for(char i=1;i<n;i++){
        V[i].path=-1;
    }
    buildMatrix();
    bfs();
    for(char i =0;i<n;i++){
        printf("%d %d\n", i+1, V[i].path);
    }
    return 0;
}

