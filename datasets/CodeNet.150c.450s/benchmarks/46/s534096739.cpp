#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
  int n,x;
  while(scanf("%d %d",&n,&x),n!=0){
    int res=0;
    for(int a=1;a<=n;a++){
      for(int b=a+1;b<=n;b++){
        for(int c=b+1;c<=n;c++){
          if(a+b+c==x) res+=1;
        }
      }
    }
    cout<<res<<endl;
  }
  return 0;
}