#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long money=100000;
  for(int i=0;i<n;i++){
    money=(1.05*money);
    if(money%1000!=0){
    money=money/1000;
    money++;
    money=money*1000;
  }
  }
 
  cout<<money<<endl;
  return 0;
}