#include<iostream>
#include<string.h>
using namespace std;

int main(){
  int n,i,p1=0,p2=0;
  string str1,str2;

  cin >> n;

  for (i = 0 ; i < n; i++){
    cin >> str1 >> str2;
    string in1 = str1.substr(0) ;
    string in2 = str2.substr(0) ;
    
    if ( in1 < in2)p2 += 3;
    if ( in1 == in2 ) {
      p1++;
      p2++;
    }
    if ( in1 > in2 ) p1 += 3;
  }

  cout << p1 << " " <<p2 <<endl;

  return 0;
}