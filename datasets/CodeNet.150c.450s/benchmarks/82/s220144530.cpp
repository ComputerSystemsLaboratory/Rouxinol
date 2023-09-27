#include <iostream>
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
  int ans;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a >> b;
    for(int i=0; i<=6;i++){
      //cout << "a";
      if(i==5){
        d.roll('E');
      } else if(i==6) {
        d.roll('E');
        d.roll('E');
      } else d.roll('N');
      //cout << d.q[0] << " " << d.q[1] << endl;
      if(d.q[0]==a)break;
    }
    for(int i=0; i<=4;i++){
      //cout << "b";
      d.roll('E');
      d.roll('N');
      d.roll('W');
      //cout << d.q[0] << " " << d.q[1] << endl;
      if(d.q[0]==a&&d.q[1]==b)break;
    }
    cout << d.q[2] << endl;
    //cout << ans << endl;
  }
}

