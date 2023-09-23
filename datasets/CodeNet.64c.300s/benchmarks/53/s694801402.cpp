#include<iostream>

using namespace std;

int main(){
  int a,b,c,d;
  int n=0;
  cin >> a >> b >> c;
  for(int x=a;x<=b;x++){
  d=c%x;
  if(d==0){
    n++;
  }}
  cout << n << endl;
  return 0;
}

