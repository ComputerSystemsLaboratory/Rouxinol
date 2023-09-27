#include<iostream>
using namespace std;

class Cube{
public:
  int f[6];
  Cube(){}
  void roll_z(){ roll(1, 2, 4, 3);}
  void roll_y(){ roll(0, 2, 5, 3);}
  void roll_x(){ roll(0, 1, 5, 4);}
  void roll(int i, int j, int k, int l){
    int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t;
  }
};

int get_r(Cube a, int x, int y){
  for ( int i = 0; i < 6; i++ ){
    for ( int j = 0; j < 4; j++ ){
      if ( a.f[0]==x && a.f[1]==y ) return a.f[2];
      a.roll_z();
    }
 
    if ( i%2 == 0 ) a.roll_y();
    else a.roll_x();
  }
}
int main(){
  Cube c;
  int q, tp, fr, r;

  for ( int i = 0; i < 6; i++ ) cin >> c.f[i];
  cin >> q;

  for ( int i = 0; i < q; i++ ){
    cin >> tp >> fr;

    r = get_r(c, tp, fr);
    cout << r << endl;
  }

  return 0;
}
