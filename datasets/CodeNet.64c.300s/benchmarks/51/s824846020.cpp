#include<iostream>
using namespace std;

int main(){
  long long int f=1;
  int i;

  cin >> i;

  for(; i>1; i--){
      f*=i;
  }

  cout << f << "\n";

  return 0;
}