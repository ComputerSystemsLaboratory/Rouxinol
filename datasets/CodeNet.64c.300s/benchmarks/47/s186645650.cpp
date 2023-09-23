#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  int num[100],n;
  int a=0;

  for(int i=0;i<100;i++)
    num[i] = 0;

  while(cin >> n)
    num[n]++;

  for(int i=0;i<100;i++)
    a = max(a,num[i]);

  for(int i=0;i<100;i++)
    if(a==num[i])
      cout << i << endl;

  return 0;
}