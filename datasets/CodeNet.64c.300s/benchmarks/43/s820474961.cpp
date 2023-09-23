#include<iostream>
using namespace std;
int main(void)
{
    int z[3],m[3],s[3],e[3],A[3];
    for(int i=0;i<2;i++){
        cin>>z[i]>>m[i]>>s[i]>>e[i];
        A[i]=z[i]+m[i]+s[i]+e[i];
        if(i==1&&A[i]>A[0])A[0]=A[i];
    }
    cout<<A[0]<<"\n";
}