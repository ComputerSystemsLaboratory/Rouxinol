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
    }
  }
  void out(){
    cout << label[1] << endl;
  }
};

int main(){
  int i;
  dice d1;
  for (i=1;i<7;i++){
    cin >> d1.label[i];
  }
  string s;
  cin >> s;
  while (s!="") {
    d1.turn(s[0]);
    s.erase(s.begin());
  }
  d1.out();
  return 0;
}

