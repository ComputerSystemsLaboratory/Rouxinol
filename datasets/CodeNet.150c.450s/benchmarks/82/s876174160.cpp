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
    void rightNum(int u, int f) {
      int count = 0;
      while(!(a[0] == u && a[1] == f)) {
        int random = count % 4;
        if (random == 0) e();
        else if (random == 1) n();
        else if (random == 2) w();
        else if (random == 3) s();
        if (count % 16 == 0) {
          n();
          n();
        }
        count++;
      }
      cout << a[2] << endl;
    }
};


int main(void)
{
  int i, in[6], q, up, front;
  for (i = 0; i < 6; i++) cin >>in[i];
  cin >> q;
  Dice d(in);
  for (i = 0; i < q; i++) {
    cin >> up >> front;
    d.rightNum(up, front);
  }
  return 0;
}