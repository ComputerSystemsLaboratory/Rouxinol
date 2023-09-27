#include<iostream>
using namespace std;
int n;
int data[100];
void inp(){
  cin>>n;
  for(int i=0;i<n;++i)cin>>data[i];
}
void proc(int i){
  int key=data[i];
  int j=i-1;
  while(j>=0&&data[j]>key){
    data[j+1]=data[j];
    --j;
  }
  data[j+1]=key;
}
void out(){cout<<data[0];for(int i=1;i<n;++i)cout<<" "<<data[i];cout<<endl;}
int main(){
  inp();
  out();
  for(int i=1;i<n;++i){
    proc(i);
    out();
  }
  return 0;
}