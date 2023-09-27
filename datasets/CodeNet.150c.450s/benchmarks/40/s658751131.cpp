#include<iostream>

using namespace std;

class Dice{
  private:
    int d_1,d_2,d_3,d_4,d_5,d_6;
  public:
    void setDice(int a,int b,int c,int d,int e,int f){
      d_1 = a;
      d_2 = b;
      d_3 = c;
      d_4 = d;
      d_5 = e;
      d_6 = f;
    }
    void roll_w(){
      int tmp = d_1;
      d_1 = d_3;
      d_3 = d_6;
      d_6 = d_4;
      d_4 = tmp;
    }
    void roll_e(){
      int tmp = d_1;
      d_1 = d_4;
      d_4 = d_6;
      d_6 = d_3;
      d_3 = tmp;
    }
    void roll_n(){
      int tmp = d_1;
      d_1 = d_2;
      d_2 = d_6;
      d_6 = d_5;
      d_5 = tmp;
    }
    void roll_s(){
      int tmp = d_5;
      d_5 = d_6;
      d_6 = d_2;
      d_2 = d_1;
      d_1 = tmp;
    }
    int getDice(){
      return d_1;
    }
};


int main(){
  int a,b,c,d,e,f;
  string cmd;
  Dice D;
  cin >> a >> b >> c >> d >> e >> f;
  D.setDice(a,b,c,d,e,f);
  cin >> cmd;
  for(int i=0;i < cmd.size();i++){
    switch(cmd[i]){
      case 'N':
      D.roll_n();
      break;
      case 'S':
      D.roll_s();
      break;
      case 'W':
      D.roll_w();
      break;
      case 'E':
      D.roll_e();
      break;
    }
  }
  cout << D.getDice() << endl;
  return 0;
}
