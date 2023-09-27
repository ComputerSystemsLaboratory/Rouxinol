#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int n;
  int mode[101];
  memset(mode,0,sizeof(mode));
  int a = 0;
  while(cin >> n){
    mode[n]++;
    a = max(a,mode[n]);
  }
  for(int i=0; i<101; i++){
    if(mode[i] == a)
      cout << i << endl;
  }
  return 0;
}

  