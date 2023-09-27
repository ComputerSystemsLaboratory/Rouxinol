#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int h1=0, h2=0, h3=0, h;
  for(int i=1;i<11;i++){
    cin >> h;
    if(h>h3){
      h3 = h;
      if(h3>h2){
        swap(h3, h2);
        if(h2>h1){
          swap(h2, h1);
        }
      }
    }
  }
  cout << h1 << endl;
  cout << h2 << endl;
  cout << h3 << endl;

  return 0;
}