#include <iostream>
using namespace std;

int main(){
  int i=1;
  int x=1;

  while(1){
    cin >> x;
    if(x!=0){
      cout << "Case " << i << ": " << x << endl;
      i++;
    }
    if(x==0){
      break;
    }
  }
  return 0;
}