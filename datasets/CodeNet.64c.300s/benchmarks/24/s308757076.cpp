#include<iostream>
using namespace std;

int main(void){
  int a,b;
  int n;
  while(cin>>n,n){

    a = b = 0;
  while(n--){
    int c,d;
    cin>>c>>d;
    if(c==d){
      a += c ;
      b += c ;
    }else if(c>d)
      a += c + d;
    else
      b += c + d; 
  }
  cout<< a << " " << b << endl;
  }
}