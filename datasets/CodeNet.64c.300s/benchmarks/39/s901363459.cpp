#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
#define f(i) for(i=0;i<=9;i++)
int main(){
    int a,b,c,d,n,s,k=0;
    
    while(scanf("%d",&n)!=EOF){
                               k=0;
    f(a)
        f(b)
            f(c)
                f(d){
                if(n==a+b+c+d)
                k++;
                }  
                
                 cout<<k<<endl;                         
    }  
    return 0;
    
}