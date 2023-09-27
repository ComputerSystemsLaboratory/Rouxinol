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

    void spin(){
      int tmp = d_2;
      d_2 = d_3;
      d_3 = d_5;
      d_5 = d_4;
      d_4 = tmp;
    }

    int findRight(int top,int front){
      for(int i=0;i < 6;i++){
        for(int j=0;j < 4;j++){
          if((*this).d_1 == top && (*this).d_2 == front) return (*this).d_3;
          (*this).spin();
        }
        if(i % 2 == 0)
        (*this).roll_n();
        else
        (*this).roll_w();
      }
      return -1;
    }

    int getDice(){
      return d_1;
    }

};


int main(){
  int a,b,c,d,e,f,n;
  string cmd;
  Dice D;
  cin >> a >> b >> c >> d >> e >> f;
  D.setDice(a,b,c,d,e,f);
  cin >> n;
  while(n--){
    int t,f;
    cin >> t >> f;
    cout << D.findRight(t,f) << endl;
  }
  return 0;
}
