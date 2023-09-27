#include <iostream>
using namespace std;
int main() {

  int e,x;
  while(1){
    int min=0;
  cin>>e;
  if (e==0) break;
  for (int z=0; z*z*z<=e; ++z){
    for (int y=0; y*y+z*z*z<=e; ++y){
      x=e-y*y-z*z*z;
      if (min>x+y+z||min==0) min=x+y+z;
    }
  }
  cout<<min<<endl;
  }
  return 0;
}