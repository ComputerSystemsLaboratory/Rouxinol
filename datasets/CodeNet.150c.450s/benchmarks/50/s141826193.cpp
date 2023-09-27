#include<iostream>
using namespace std;

int  main(){
  int n;
  while(1){
  int count=0;
  cin >> n;
  if(n==0)break;
  int total = 1000-n;
  if(total >= 500){
  count+=total/500;
  total%=500;
  }

  if(total >= 100){
  count+=total/100;
  total%=100;
  }
  
  if(total >= 50){
  count+=total/50;
  total%=50;
  }

  if(total >= 10){
  count+=total/10;
  total%=10;
  }

  if(total >=  5){
  count+=total/5;
  total%=5;
  }

  if(total >=  1)
  count+=total/1;

  cout << count << endl;

  }
  return 0;
}