#include <iostream>
using namespace std;

int main(void){
  int x, y, s, i, j;
  int tmp, higher;
  while(cin>>x>>y>>s){
    if(x == 0){
      break;
    }
    higher = 0;
    for(i=1;i<s;i++){
      for(j=i;j<s;j++){
        if(i * (100 + x) / 100 + (j * (100 + x) / 100) == s){
          tmp = i * (100 + y) / 100 + j * (100 + y) / 100;
          higher = max(higher, tmp);
        }
      }
    }
    cout<<higher<<endl;
  }
  return 0;
}
