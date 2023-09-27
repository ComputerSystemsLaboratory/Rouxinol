#include <bits/stdc++.h>
using namespace std;

const int MAX=105;
int state[MAX],N,S[MAX][MAX];
priority_queue<pair<int,int>> Q;

int prim(){
    int sum=0,cnt=1;
    for(int i=0;i<N;i++){
        state[i]=0;
    }
    state[0]=1;
    for(int i=0;i<N;i++){
        if(S[0][i]!=10000) Q.push(make_pair(-S[0][i],i));
    }
    while(1){
        int a=Q.top().second;
        if(state[a]==0){
        sum+=(-Q.top().first);
        Q.pop();
        state[a]=1;
        cnt++;
        for(int i=0;i<N;i++){
            if(S[a][i]!=10000000&&state[i]==0) Q.push(make_pair(-S[a][i],i));
        }
        }
        else Q.pop();
        if(cnt==N) break;
    }
    return sum;
}


int main(){

    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int a;cin>>a;
            if(a==-1) S[i][j]=10000000;
            else S[i][j]=a;
        }
    }
    cout<<prim()<<endl;
}

