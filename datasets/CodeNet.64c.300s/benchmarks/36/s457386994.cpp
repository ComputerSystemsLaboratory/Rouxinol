#include<iostream>
using namespace std;
class itp1_2c{
public:void sort(int first,int second,int third){
  int tmp;
  if(first>second){
    tmp=first;
    first=second;
    second=tmp;
  }
  if(second>third){
    tmp=second;
    second=third;
    third=tmp;
  }
  if(first>second){
    tmp=first;
    first=second;
    second=tmp;
  }
  cout<<first<<" "<<second<<" "<<third<<endl;
}
};
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  itp1_2c run;
  run.sort(a,b,c);
  return 0;
}