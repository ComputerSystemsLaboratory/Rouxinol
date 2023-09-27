#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int kazu[35];
    kazu[1]=1;
    kazu[2]=2;
    kazu[3]=4;
    for(int a=4;a<=30;a++)
kazu[a]=kazu[a-1]+kazu[a-2]+kazu[a-3];
     
    while(1)
  {
        int n;
        cin>>n;
        if(n==0)break;
        cout<<(kazu[n]/10+1)/365+1<<endl;
    }
     
    return 0;
}