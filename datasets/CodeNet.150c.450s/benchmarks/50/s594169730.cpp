#include <iostream>
using namespace std;

int main()
{
  int n;
  while(cin>>n && n){
    int res = 0;
    n = 1000 - n;
    res += n / 500; n %= 500;
    res += n / 100; n %= 100;
    res += n / 50;  n %= 50;
    res += n / 10;  n %= 10;
    res += n / 5;   n %= 5;
    res += n / 1;   n %= 1;

    cout<<res<<endl;
  }
}