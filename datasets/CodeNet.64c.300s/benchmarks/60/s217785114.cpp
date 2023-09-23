#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool road[17][17];
int memo[17][17];
int A,B,N;
int func(int y,int x){
    if(y<1||x<1)return 0;
    if(memo[y][x]!=0)return memo[y][x];
    if(road[y][x]){
        memo[y][x]=0;
        return memo[y][x];
    }
    memo[y][x]=func(y-1,x)+func(y,x-1);
    return memo[y][x];
}
int main(){
    while(cin>>A>>B,A||B){
        cin>>N;
        fill(road[0],road[0]+17*17,false);
        fill(memo[0],memo[0]+17*17,0);
        for(int i=0;i<N;i++){
            int x,y;
            cin>>x>>y;
            road[y][x]=true;
        }
        memo[1][1]=1;
        cout<<func(B,A)<<endl;
    }
    /*for(int i=0;i<B;i++){
        for(int j=0;j<A;j++){
            cout<<memo[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}