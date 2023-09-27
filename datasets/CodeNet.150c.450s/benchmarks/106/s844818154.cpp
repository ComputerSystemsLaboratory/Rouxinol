#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int a,b,c;
  int rmd=0,i=0,ans=0;

  cin >>a >>b >>c;

  do{
    if(rmd==c%(a+i)){
      ans++;
    }
    i++;
  }while(a+i<=b);

  cout <<ans <<endl;

  return 0;
}