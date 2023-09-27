#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

 int digit(int a)
 {
  int count=0;
  while (a)
  {
    a/=10 ;
    count++;
  }
  return count;
}

int main(){
  int a, b ;
  while(cin >> a >> b)
    cout << digit(a+b)<<endl;
}

