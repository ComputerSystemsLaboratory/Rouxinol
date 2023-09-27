#include<iostream>
using namespace std;
int main()
{
  int check[30]={};
  int i,x;
  for(i=0;i<28;i++){
    cin >> x;
    check[x-1]++;
  }
  for(i=0;i<30;i++){
    if(check[i]==0) cout << i+1 << endl;
  }
  return 0;
}