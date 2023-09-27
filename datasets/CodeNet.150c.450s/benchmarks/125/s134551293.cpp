#include<cstdio>
#include<stack>
using namespace std;
const char N_MAX = 105;
char n;
unsigned char time=0;
stack<int> sta;
bool matrix[N_MAX][N_MAX];
struct Node{
    //0:undiscovered 1:active 2:end
    char state;
    unsigned char stTime, endTime;
};
Node V[N_MAX];
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
char next(char num){
    for(char i=0;i<n;i++){
        if(matrix[num][i]&&V[i].state==0){
            return i;
        }
    }
    return -1;
}
void dfs() {
    for(char i = 0; i < n; i++) {
        if(V[i].state == 0) {
            sta.push(i);
            V[i].stTime = ++time;
            V[i].state = 1;
            while(!sta.empty()) {
                char active = sta.top();
                char nex = next(active);
                if(nex != -1) {
                    sta.push(nex);
                    V[nex].stTime = ++time;
                    V[nex].state = 1;
                } else {
                    sta.pop();
                    V[active].endTime = ++time;
                    V[active].state = 2;
                }
            }
        }
    }
}
int main(){
    scanf("%d", &n);
    buildMatrix();
    dfs();
    for(char i=0;i<n;i++){
        printf("%d %d %d\n", i+1, V[i].stTime, V[i].endTime);
    }
}

