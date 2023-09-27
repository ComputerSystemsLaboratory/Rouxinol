#include<iostream>
using namespace std;

int main()
{
  int a,b,wa;
  int count;

  while(cin >> a >> b){
    count=0;
    wa=(a+b)*10;
    while(wa /= 10){
      count++;
    }
    cout << count << endl;
  }
}