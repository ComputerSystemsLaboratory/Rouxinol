#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    int w,num,count,sum,a[600];
    while(cin>>w){
       num=600/w;
       count=0;
       sum=0;
       for(int i=0;i<=600;i+=w){
          a[count++]=w*i*i;        
       }
       for(int i=0;i<num;i++){
          sum+=a[i];        
       }
       cout<<sum<<endl;
    }

    return 0;
}