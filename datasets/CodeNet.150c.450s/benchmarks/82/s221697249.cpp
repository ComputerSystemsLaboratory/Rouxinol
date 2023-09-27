//ほぼstandard answer
#include<iostream>
using namespace std;
 
class Cube{
public:
  int f[6];
  Cube(){} 
  void roll_z(){ roll(1, 2, 4, 3);} //横向き
  void roll_y(){ roll(0, 2, 5, 3);} //サイコロの番号は+1
  void roll_x(){ roll(0, 1, 5, 4);}
  void roll(int i, int j, int k, int l){
    int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t;
  }
  /*前回載せた void move(char ch) いらない*/
};
 
int getRight( Cube c1, int f1, int f2 ){ //what is the right face
  for(int i = 0; i < 6; i++){
    for ( int j = 0; j < 4; j++ ){
      if ( c1.f[0] == f1 && c1.f[1] == f2 ) return c1.f[2];
      c1.roll_z(); //違ったら横に回転してf[1]変えてみよか(前面)
    }
    if ( i % 2 == 0 ) c1.roll_y();
    /*i%2==0 に意味はないんちゃう？
      3回ずつ2方向回転*/
    else c1.roll_x();
  }
  return -1;
}
 
int main(){
  Cube c; 
  int f1,f2; //question
  //f1 -> up    f2 -> front
   
  for ( int i = 0; i < 6; i++ ) cin >> c.f[i]; //define each face 
  int q; cin >> q; //the number of questions
   
  for ( int i = 0; i < q; i++ ){
    cin >> f1 >> f2;
    cout << getRight(c, f1, f2) << endl;
  }
   
  return 0;
}
