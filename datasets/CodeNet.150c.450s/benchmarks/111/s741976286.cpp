#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
long long int fie[101][21];
int main(){
    long long int N,a;
    cin>>N;
    cin>>a;
    fie[0][a]=1;
    for(int i=1;i<N-1;i++){
        cin>>a;
        for(int j=0;j<=20;j++){
            if(0<=j-a)fie[i][j]+=fie[i-1][j-a];
            if(j+a<=20)fie[i][j]+=fie[i-1][j+a];
        }
    }
    cin>>a;
    cout<<fie[N-2][a]<<endl;
    return 0;
}