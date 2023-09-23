#include<iostream>

using namespace std;

void gcd(int* a,int b){
  int c;
  if(*a<b) swap(*a,b);
  c=*a;*a=b;
  if(c%(*a))gcd(a,c%(*a));
}

int main(int argc,char* argv[]){
  int a,b;
  cin >> a >> b;
  gcd(&a,b);
  cout << a << endl;
}