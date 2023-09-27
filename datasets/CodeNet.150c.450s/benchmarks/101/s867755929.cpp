#include<cstdio>
#include<queue>
#include<vector>
#define N_MAX 100005
using namespace std;
struct Node{
    vector<int> vct;
    short type;
    char state;//0:undiscovered
};
vector<Node> nodes;
int n;
void bfs(){
    queue<int> Q;
    short type=1;
    for(int i=0;i<n;i++){
        if(nodes[i].state==0){
            Q.push(i);
            nodes[i].type = type;
            nodes[i].state = 1;
            while(!Q.empty()){
                int active = Q.front();
                int total = nodes[active].vct.size();
                for(int i=0;i<total;i++){
                    int newIndex=nodes[active].vct[i];
                    if(nodes[newIndex].state==0){
                        Q.push(newIndex);
                        //printf("== %d -> %d ==\n", active, newIndex);
                        nodes[newIndex].type = type;
                        nodes[newIndex].state = 1;
                    }
                }
                Q.pop();
            }
            type++;
        }
    }
}
int main(){
    int rel;
    scanf("%d%d", &n, &rel);
    for(int i=0;i<n;i++){//initial
        Node init;
        init.type=0;
        init.state=0;
        nodes.push_back(init);
        //printf("initial info: %d %d\n", init.type, init.state);
    }
    for(int i=0;i<rel;i++){
        int maj, sub;
        scanf("%d%d", &maj, &sub);
        nodes[maj].vct.push_back(sub);
        nodes[sub].vct.push_back(maj);//Undirected
    }
    bfs();
    short ques;
    scanf("%d", &ques);
    for(short i=0;i<ques;i++){
        int maj, sub;
        scanf("%d%d", &maj, &sub);
        if(nodes[maj].type==nodes[sub].type){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }

    /*printf("\n============ now testing ================\n");
    for(int i=0;i<n;i++){
        printf("\t-- %d: type:%d state:%d --\n", i, nodes[i].type, nodes[i].state);
    }*/
    return 0;
}

