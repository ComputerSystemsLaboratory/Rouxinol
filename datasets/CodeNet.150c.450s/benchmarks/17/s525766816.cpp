#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
  int num[5];
  cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
  sort(num,num+5,greater<int>());
  for(int i=0;i<4;i++)
    cout<<num[i]<<" ";
  cout<<num[4]<<endl;
  return 0;
}