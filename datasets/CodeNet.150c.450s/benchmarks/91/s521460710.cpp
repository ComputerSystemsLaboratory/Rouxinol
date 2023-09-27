#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
int a[1000000];

int f(int n){
    int sum=0;
   for(int i=0;i<=n;i++)a[i]=1;
   for(int i=2;i<=n;i++){
      if(a[i]==1){
         sum++;
         for(int j=2*i;j<=n;j+=i)
            a[j]=0;                        
      }        
   }
    return sum;
}

int main()
{
    int n;
    while(cin>>n){
       cout<<f(n)<<endl;              
    }
    return 0;
}