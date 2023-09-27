#include<iostream>
using namespace std;

int num[11111]={0};

int main(){
  int a,b,c;
  int t=0;
  
  cin >> a >> b >> c;
  
  for(int i=a;i<=b;i++){
    if(c%i==0)t++;
  }
  
  cout << t << endl;

  return 0;
}