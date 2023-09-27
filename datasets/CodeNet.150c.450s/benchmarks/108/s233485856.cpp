#include<iostream>
#include<queue>
using namespace std;

int AdjM[101][101]={0};
int D[101];

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

void bfs(int s){
    //cerr<<"bfs root "<<s<<"\n";
    queue<int> Q;
    Q.push(s);
    D[s]=0;
    while(!Q.empty()){
        int cur=Q.front();
        Q.pop();
        //cerr<<"visiting "<<cur<<" "<<D[cur]<<"\n";
        for(int i=1;i<101;++i){
            if(AdjM[cur][i]!=0 && D[i]==-1){
                D[i]=D[cur]+1;
                Q.push(i);
            }
        }
    }
}

int main(){
    Fill(D,-1);
    int n;
    cin>>n;
    int id,num,ix;
    for(int i=0;i<n;++i){
        cin>>id>>num;
        for(int j=1;j<=num;++j){
            cin>>ix;
            AdjM[id][ix]=1;
        }
    }

    bfs(1);

    for(int i=1;i<=n;++i){
        cout<<i<<" "<<D[i]<<"\n";
    }
}