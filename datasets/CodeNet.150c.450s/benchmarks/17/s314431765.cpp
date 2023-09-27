#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int num[5];
  cin >>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
  sort(num,num+5);
  cout <<num[4]<<" "<<num[3]<<" "<<num[2]<<" "<<num[1]<<" "<<num[0]<<endl;
  return 0;
}