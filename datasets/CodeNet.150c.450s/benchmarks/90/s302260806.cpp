#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int input=0;
  int a[100];
  int b[100][2];
  for(int i=0;i<100;i++){
    for(int j=0;j<2;j++){
      b[i][j]=0;
    }
  }
  int n=0;
  while(cin>>input){
    a[n]=input;
    n++;
  }
  sort(a,a+n);
  int i=0,j=0;
  for(i=0;i<n;i++){
    if(i==0){
      b[0][0]=a[0];
      b[0][1]++;
    }
    else if(b[j][0]==a[i]){
      b[j][1]++;
    }
    else{
      b[++j][0]=a[i];
      b[j][1]++;
    }
  }
  int max=b[0][1];
  for(int k=0;k<=j;k++){
    if(max<b[k][1]){
      max=b[k][1];
    }
  }
  int out[100];
  int m=0;
  for(int k=0;k<=j;k++){
    if(max==b[k][1]){
      out[m]=b[k][0];
      m++;
    }
  }
  for(int p=0;p<m;p++){
    cout<<out[p]<<"\n";
  }
  return 0;
}