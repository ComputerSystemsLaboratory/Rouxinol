#include<iostream>
using namespace std;

bool a[99];

int main(){

  int n;

  for(int i=0;i<28;i++){
    cin >> n;
    a[n] = true;
  }
  
  for(int i=1;i<31;i++){
    if(!a[i]) cout << i << endl;
  }

}