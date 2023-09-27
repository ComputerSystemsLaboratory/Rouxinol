#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int nari[5],i,j,h,a;

  for(i=0;i<5;i++){
    cin>>nari[i];
    }

  for(i=0;i<5;i++){
    a=i;
    for(j=i;j<5;j++){
      if(nari[a]<nari[j])a=j;
    }
    h=nari[a];
    nari[a]=nari[i];
    nari[i]=h;
  }

  for(i=0;i<5;i++){
    cout << nari[i];
    if(i != 4)printf(" ");
  }
  cout << endl;
}