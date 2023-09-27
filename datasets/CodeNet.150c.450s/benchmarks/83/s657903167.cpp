#include<iostream>
#include<utility>
using namespace std;
int main(){
    int N,W;
    int p,w;
    pair<int,int>m[101];
    cin>>N>>W;
    for(int i=1;i<=N;++i){
        cin>>p>>w;
        m[i]=make_pair(p,w);
    }
    int V[101][10001];
    for(int i=1;i<=N;++i){
        for(int c=1;c<=W;++c){
            if(c-m[i].second<0){
                V[i][c]=V[i-1][c];
            }
            else{
                int temp;
                temp=m[i].first+V[i-1][c-m[i].second];
                V[i][c]=max(temp,V[i-1][c]);
            }
        }
    }
    cout<<V[N][W]<<endl;
}