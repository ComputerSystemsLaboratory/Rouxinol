#include <iostream>
#include <random>
using namespace std;

class Dice{
private:
  int tmp;
public:
  int q[6];
  void roll(char d){
    if(d=='N'){
      tmp = q[4];
      q[4] = q[0];
      q[0] = q[1];
      q[1] = q[5];
      q[5] = tmp;
    } else if(d=='E'){
      tmp = q[2];
      q[2] = q[0];
      q[0] = q[3];
      q[3] = q[5];
      q[5] = tmp;
    } else if(d=='W'){
      tmp = q[3];
      q[3] = q[0];
      q[0] = q[2];
      q[2] = q[5];
      q[5] = tmp;
    } else if(d=='S'){
      tmp = q[1];
      q[1] = q[0];
      q[0] = q[4];
      q[4] = q[5];
      q[5] = tmp;
    }
  }
};


int main(){
  Dice d;
  for(int i=0; i<6; i++){
    cin >> d.q[i];
  }
  int n;
  int a, b;
  int r;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a >> b;
    while(d.q[0]!=a||d.q[1]!=b){
      r = rand()%4;
      if(r==0)d.roll('N');
      else if(r==1)d.roll('E');
      else if(r==2)d.roll('W');
      else if(r==3)d.roll('S');
    }
    cout << d.q[2] << endl;
  }
}


