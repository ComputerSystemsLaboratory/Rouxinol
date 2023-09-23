#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int data_count[100]={0},num,max_count=0,p=0;
  while(scanf("%d",&num)!=EOF){
    data_count[num-1]++;
    p++;
  }
  for(int i=0;i<p;i++){
    if(max_count<data_count[i])max_count=data_count[i];
  }
  for(int i=0;i<p;i++){
    if(max_count==data_count[i]){
      cout<<i+1<<endl;
    }
  }
}
 