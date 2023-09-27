#include <iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int MA[N][M],VE[M],ANS[N];
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>MA[i][j];
    for(int i=0;i<N;i++)ANS[i]=0;
    for(int i=0;i<M;i++)cin>>VE[i];
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)ANS[i]+=MA[i][j]*VE[j];
    for(int i=0;i<N;i++)cout<<ANS[i]<<endl;
    return 0;
}
