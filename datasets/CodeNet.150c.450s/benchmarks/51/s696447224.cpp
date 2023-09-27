#include<iostream>
#include<cstdio>

using namespace std;

int main(){
  int a[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
  int i,n,j;

  for(i=0;i<28;i++){
    cin >> n;
    for(j=0;j<30;j++){if(a[j] == n)a[j]=0; }
      }

  for(i=0;i<30;i++){
    if(a[i] != 0)cout << a[i] << endl;

  }



}