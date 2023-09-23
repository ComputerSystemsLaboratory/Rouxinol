#include<iostream>
using namespace std;

int AdjM[101][101];

int main(){
    int N;
    cin>>N;
    int id,edgnum,adj;
    for(int i=0;i<N;++i){
        cin>>id;
        cin>>edgnum;
        for(int j=0;j<edgnum;++j){
            cin>>adj;
            AdjM[id-1][adj-1]=1;
        }

    }

    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            if(j!=N-1){
                cout<<AdjM[i][j]<<" ";
            }
            else if(j==N-1){
                cout<<AdjM[i][j]<<"\n";
            }
        }
    }
}