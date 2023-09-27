#include<iostream>
#include<string>

using namespace std;

class Dice{
  public:
    int a[6], tmp, i;

    Dice(int input[6]){
      for (i = 0; i < 6; i++) {
        a[i] = input[i];
      }
    }

    void e() {
      tmp = a[2]; a[2] = a[0]; a[0] = a[3]; a[3] = a[5]; a[5] = tmp;
    }

    void n() {
      tmp = a[0]; a[0] = a[1]; a[1] = a[5]; a[5] = a[4]; a[4] = tmp;
    }

    void w() {
      tmp = a[0]; a[0] = a[2]; a[2] = a[5]; a[5] = a[3]; a[3] = tmp;
    }

    void s() {
      tmp = a[0]; a[0] = a[4]; a[4] = a[5]; a[5] = a[1]; a[1] = tmp;
    }
};


int main(void)
{
  int i, in[6];
  string command;
  for (i = 0; i < 6; i++) cin >>in[i];
  cin >> command;
  Dice d(in);
  for (i = 0; i < command.size(); i++) {
    if (command[i] == 'E') d.e();
    else if (command[i] == 'N') d.n();
    else if (command[i] == 'S') d.s();
    else if (command[i] == 'W') d.w();
  }
  cout << d.a[0] << endl;
  return 0;
}