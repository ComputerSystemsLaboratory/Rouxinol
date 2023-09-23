#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    long n,root[100][21],k;
    memset(root,0,sizeof(root));
    long cnt,ans,t,h;
    cin>>n;
    cin>>k;
    root[0][k]++;
    for(int i=1;i<n-1;i++){
        cin>>k;
        for(int o=0;o<=20;o++){
            if(root[i-1][o]!=0){
                t=o+k;
                h=o-k;
                if(t<=20&&t>=0){
                    root[i][t]+=root[i-1][o];
                }
                if(h<=20&&h>=0){
                    root[i][h]+=root[i-1][o];
                }
            }
        }
    }
    ans=0;
    cin>>k;
    cout<<root[n-2][k]<<endl;
}