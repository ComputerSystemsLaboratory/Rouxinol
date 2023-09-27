#include<iostream>
#include<cctype>
using namespace std;

int main( ){
  int a[127] = {};
  char x;
  while( cin >> x ){
    if(isalpha(x))a[(int)x]++;
  }
  for(int j=97;j<123;j++){
    cout<<(char)j<<" : "<<a[j-32]+a[j]<<endl;
  }
  return 0;
}