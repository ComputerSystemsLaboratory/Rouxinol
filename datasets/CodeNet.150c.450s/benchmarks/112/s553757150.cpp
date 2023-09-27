#include<iostream>
#include<map>
#include<stdio.h>

using namespace std;

int main(){

  int in;
  while(1){
    cin >> in;
    if(in == 0) break;
    
    map<char, char> M;
    char a, b;  

    for(int i = 0; i < in; i++){
      cin >> a >> b;
      M[a] = b;
    }
    cin >> in;
    
    for(int i = 0; i < in; i++){
      cin >> a;
      if(M[a] != NULL) cout << M[a];
      else cout << a;
    }
    cout << endl;
  }
    
  return 0;
}