#include <iostream>
using namespace std;
#define rep(i,n) for(int i = 0 ; i < n ; i++)

int fn(char a[]){
  int n = 0,k = 1;
  for(int i = 0 ; a[i] ; i++){
    if(a[i]=='m'){
      n += k*1000;
    }
    if(a[i]=='c'){
      n += k*100;
    }
    if(a[i]=='x'){
      n += k*10;
    }
    if(a[i]=='i'){
      n += k*1;
    }
    if('0' <= a[i] && a[i] <= '9'){
      k = a[i] - '0';
    }else{
      k=1;
    }
  }
  return n;
}

int main()
{
  int n;
  cin >> n;
  rep(i, n){
  char a1[10], a2[10];
  cin >> a1 >> a2;
  
    int a = 0;
    a = fn(a1) + fn(a2);
    
    if((a / 1000) > 1){
      cout << a/1000;
    }
    if(a / 1000){
      cout << "m";
    }
    a %= 1000;

    if((a / 100) > 1){
      cout << a/100;
    }
    if(a / 100){
      cout << "c";
    }
    a %= 100;

    if((a / 10) > 1){
      cout << a/10;
    }
    if(a / 10){
      cout << "x";
    }
    a %= 10;

    if(a > 1){
      cout << a;
    }
    if(a){
      cout << "i";
    }
    cout << '\n';
  }
}
 