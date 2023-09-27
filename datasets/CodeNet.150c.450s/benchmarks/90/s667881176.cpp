#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int math[101],check,mmax=0;
    for(int i=1;i<101;i++)math[i]=0;
    while(scanf("%d",&check)!=EOF){
        math[check]++;
        if(math[check]>mmax)mmax=math[check];
    }
    for(int i=1;i<101;i++){
        if(mmax==math[i])cout<<i<<endl;
    }
}