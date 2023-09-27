#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,t;
    int c[21],T[21][50001];
    cin>>n>>m;
    for(int i=0;i<m;++i){
        cin>>t;
        c[i]=t;
        for(int j=1;j<=n;++j){
            T[i][0]=0;
            T[0][j]=100000;
        }
    }
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(c[i-1]>j){
                T[i][j]=T[i-1][j];
            }
            else{
                T[i][j]=min(T[i-1][j],T[i][j-c[i-1]]+1);
            }
        }
    }
    cout<<T[m][n]<<endl;
}