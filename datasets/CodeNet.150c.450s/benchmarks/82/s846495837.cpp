#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class dice{
public:
  int label[7];
  void turn(char c) {
    int temp;
    if (c=='S') {
      temp=label[1];
      label[1]=label[5];
      label[5]=label[6];
      label[6]=label[2];
      label[2]=temp;
    } else if (c=='E') {
      temp=label[1];
      label[1]=label[4];
      label[4]=label[6];
      label[6]=label[3];
      label[3]=temp;
    } else if (c=='W') {
      temp=label[1];
      label[1]=label[3];
      label[3]=label[6];
      label[6]=label[4];
      label[4]=temp;
    }  else if (c=='N') {
      temp=label[1];
      label[1]=label[2];
      label[2]=label[6];
      label[6]=label[5];
      label[5]=temp;
    } else if (c=='T') {
      temp=label[2];
      label[2]=label[3];
      label[3]=label[5];
      label[5]=label[4];
      label[4]=temp;
    }
  }
  void out(int k){
    cout << label[k] << endl;
  }
};

int main(){
  int i,n,u,m;
  dice d1;
  for (i=1;i<7;i++){
    cin >> d1.label[i];
  }
  cin >> n;
  for (i=0;i<n;i++){
    cin >> u >> m;
    if (d1.label[2]==u) {
      d1.turn('N');
    } else if (d1.label[5]==u) {
      d1.turn('S');
    } else {
      while (d1.label[1]!=u) {
        d1.turn('W');
      }
    }
    while (d1.label[2]!=m) {
      d1.turn('T');
    }
    d1.out(3);
  }
  return 0;
}

