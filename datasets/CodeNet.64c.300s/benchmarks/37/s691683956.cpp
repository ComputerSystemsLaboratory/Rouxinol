#include <iostream>

using namespace std;

int main(){
  int n,ret;
  while(cin >> n ,n){
    ret = 0;
    int i,j,cn;
    for(i=1;i<=(n+1)/2;i++){
      cn=0;
      for(j=i;j<=(n+1)/2;j++){
        cn+=j;
        if(cn==n && cn!=1){
          ret++;
          break;
        }
      }
    }
    cout << ret << endl;
  }
  return 0;
}

