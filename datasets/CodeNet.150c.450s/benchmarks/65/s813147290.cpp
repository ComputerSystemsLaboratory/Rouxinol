#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string str[36],str2[36];
  
  for ( int i = 0; i < n; i++ ) {
    cin >> str[i];
    str2[i] = str[i];
  }
  
  for ( int i = 0; i < n-1; i++ ) {
    for ( int j = n-1; j >= i+1; j-- ) {
    int num1,num2;
    num1 = str[j][1] - '0';
    num2 = str[j-1][1] - '0';
      
    if ( num1 < num2 ) swap(str[j],str[j-1]);
  
    }
  }

  for ( int i = 0; i < n; i++ ) {
    int minj = i;
    for ( int j = i; j < n; j++ ) {
      int num1,num2;
      num1 = str2[j][1] - '0';
      num2 = str2[minj][1] - '0';
      if ( num1 < num2 ) minj = j;

    }
    swap(str2[i],str2[minj]);

  }
  
  for ( int i = 0; i < n-1; i++ ) cout << str[i] << " ";
  cout << str[n-1] << endl;
  cout << "Stable" << endl;
  
  for ( int i = 0; i < n-1; i++ ) cout << str2[i] << " ";
  cout << str2[n-1] << endl;
  
  bool flag = true;
  for ( int i = 0; i < n; i++ ) {
    if ( str[i] != str2[i] ) flag = false;
  }

  if ( flag == true ) cout << "Stable" << endl;
  else cout << "Not stable" << endl;

  return 0;
}