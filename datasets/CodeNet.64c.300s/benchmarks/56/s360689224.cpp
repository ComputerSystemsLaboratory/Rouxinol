#include<iostream>
using namespace std;

long long int day(int y,int m,int d){
  long long int year = 0;
  for(int i = 0 ; i < y ; i ++){
    if(i%3){
      year += 195;
    }else{
      year += 200;
    }
  }
  m--;
  if(y%3==0)return year + m * 20  + d;
  return year + (m/2 + m%2) * 20 + m/2 * 19 + d;
}

int main(void){
  int n;
  cin>>n;
  long long int mire = day(1000,1,1);
  while(n--){
    int y,m,d;
    cin>>y>>m>>d;
    cout<<mire-day(y,m,d)<<endl;
  }
}