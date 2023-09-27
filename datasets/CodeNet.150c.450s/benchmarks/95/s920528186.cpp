#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
  while(1){
    int n,a=0,b=0,kai=0;
    string asi;
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>asi;
      if(asi[0]=='r'){
        if(asi[1]=='u')a++;
        else a--;
      }
      if(asi[0]=='l'){
        if(asi[1]=='u')b++;
        else b--;
      }
      if(kai%2==0&&a+b==2)kai++;
      if(kai%2==1&&a+b==0)kai++;
    }
    printf("%d\n",kai);
  }
  return 0;
}