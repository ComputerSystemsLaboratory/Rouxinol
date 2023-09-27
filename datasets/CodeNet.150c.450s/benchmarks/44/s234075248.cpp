#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int t=1,i,j,h,bu,a[4],b[4];

  while(cin>>a[0]>>a[1]>>a[2]>>a[3]){

  for(i=0;i<4;i++){
      cin>>b[i];
    }
  h=0;bu=0;
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(a[i]==b[j]&&i==j)h+=1;
      else if(a[i]==b[j])bu+=1;   
    }
  }
  cout<<h<<" "<<bu<<endl;
  }
  return 0;
}