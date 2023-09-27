#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
  int a;
  bool ok[31] = {};
  while(cin >> a) ok[a] = true;
  for(int i = 1 ; i < 31 ; i++ ){
    if(!ok[i]) cout << i << endl;
  }
}