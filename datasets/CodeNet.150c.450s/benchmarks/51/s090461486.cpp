#include<bits/stdc++.h>
using namespace std;

int main(){
  int num[31]={0};
  for(int i=0;i<28;i++){
    int a;
    cin>> a;
    num[a]=1;
  }

  for(int i=1;i<31;i++){
    if(num[i]==0) cout<< i<< endl;
  }
}