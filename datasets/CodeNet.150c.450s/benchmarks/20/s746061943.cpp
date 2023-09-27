#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    
  int S,s,m,h;cin >> S; 
  h=S/(60*60);
  cout << h ; cout<<":";
  m=(S%(60*60))/60;
  cout << m ; cout<<":";
  s=(S%(60*60))%60;   cout << s;
  cout<<endl;
    
}
