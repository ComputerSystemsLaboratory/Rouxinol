#include<iostream>
#define max 255
using namespace std;
 
int main(){
  char c,ch,d,change[max];
  int n,m;
 
  while(cin >>n && n!=0){
     
    for(int i=0;i<max;i++)change[i]=i;
     
     
    for(int i=0;i<n;i++){
      cin >>c>>ch;
      change[c]=ch;
    }
    cin >>m;
    for(int i=0;i<m;i++){
      cin >>d;
      cout <<change[d];
    }
    cout <<endl;
  }
   
  return 0;} 