#include<iostream>
using namespace std;
int add(int n, int m, int x);
int main(){
  int n,m;
  while(cin >>n>>m,n||m){
    int c = 0;
    for(int i=0; i<10; i++){
      if(m >= i){c+=add(n-1,m-i,i);}
    }
    cout <<c<<endl;
  }
  return 0;
}
int add(int n, int m, int x){
  int c = 0;
  if(!n && !m){return 1;}
  else if(n>0){
    for(int i=x+1; i<10; i++){
      if(m >= i){c+=add(n-1,m-i,i);}
    }
  }
  return c;
}