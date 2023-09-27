#include <iostream>

using namespace std;

const int Max = 10000000;
bool prime[Max];
int main()
{
  int in;
  for(int i=0; i<Max; i++){
    prime[i] = true;
  }
  prime[1] = false;
  for(int i=2; i<Max; i++){
    if(prime[i]){
      for(int s=i*2; s<=Max; s+=i){
	prime[s] = false;
      }
    }
  }
  while(cin>>in){
    int cnt=0;
    for(int i=1; i<=in; i++){
      if(prime[i]){
	cnt++;
      }
    }
      cout << cnt << endl;
  }
}