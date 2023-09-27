#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main() {
  char c;
  int arr[26] = {};
  while( cin >> c ) {
    if(isalpha(c)) arr[tolower(c) - 'a']++; 
  }

  char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < 26; i++) {
    cout << alpha[i] << " : ";
    cout << arr[i] << endl;
  }

  return 0;
}

