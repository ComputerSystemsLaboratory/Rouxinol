#include <iostream>
#include <string>
using namespace std;

int main(){
 int n,tc=0,hc=0;
 string taro,hanako;

 cin >> n ;
 for (int i=0;i<n;i++){
  cin >> taro >> hanako ;
  if(taro>hanako)tc+=3;
  else if(taro<hanako)hc+=3;
  else {
   tc++;
   hc++;
  }
 }

 cout << tc << " " << hc << endl;

 return 0;
}