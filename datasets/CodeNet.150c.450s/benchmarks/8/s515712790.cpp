#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  int a = 0;
  int b = 0;
  cin >> n;
  string str1, str2;
  for(int i=0; i<n; i++){
    cin >> str1 >> str2 ;
    if ( str1 == str2 ) {
        a = a+1, b= b+1;
    }
    else if ( str1 < str2 ){
        b = b+3;
    }
    else if ( str1 > str2 ) {
        a = a+3;
    }
  }
  cout << a << " " << b << endl;
}
