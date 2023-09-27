#include <iostream>
using namespace std;

int solve(int cost){
  int count=0;
  cost=1000-cost;
  while(cost>=500)count++,cost-=500;
  while(cost>=100)count++,cost-=100;
  while(cost>=50)count++,cost-=50;
  while(cost>=10)count++,cost-=10;
  while(cost>=5)count++,cost-=5;
  while(cost>=1)count++,cost-=1;
  return count;
}

int main(){
  int input;
  cin>>input;
  while(input){
    cout<<solve(input)<<endl;
    cin>>input;
  }
  return 0;
}