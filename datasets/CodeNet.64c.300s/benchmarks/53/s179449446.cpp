#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;

  int count = 0;
  while(1){
    if(a>b) break;
    else{
      if(c%a==0) count++;
      a++;
    }
  }

  cout << count << endl;

  return 0;
}