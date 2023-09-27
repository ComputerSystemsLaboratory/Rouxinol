#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,aa=0,bb=0;
  cin >>n;
  string a,b;
  for(int i=0;i<n;i++){
    cin >>a>>b;
    if(a==b){
      aa+=1;
      bb+=1;
    }
    if(a>b){
      aa+=3;
    }
    if(a<b){
      bb+=3;
    }
  }
  cout <<aa<<" "<<bb<<endl;
  return 0;
}