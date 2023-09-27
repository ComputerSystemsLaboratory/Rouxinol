#include<iostream>
using namespace std;

class Dice{
public:

int s, t, face[6];

void scan(){
  for( int i = 0; i < 6; i++){
    cin >> face[i];
  }
}

void determine(){
  if( s == face[0] ){
    if( t == face[1] ) cout << face[2] << endl;
    if( t == face[2] ) cout << face[4] << endl;
    if( t == face[4] ) cout << face[3] << endl;
    if( t == face[3] ) cout << face[1] << endl;
  } else if( s == face[1] ){
    if( t == face[0] ) cout << face[3] << endl;
    if( t == face[3] ) cout << face[5] << endl;
    if( t == face[5] ) cout << face[2] << endl;
    if( t == face[2] ) cout << face[0] << endl;
  } else if( s == face[2] ){
    if( t == face[0] ) cout << face[1] << endl;
    if( t == face[1] ) cout << face[5] << endl;
    if( t == face[5] ) cout << face[4] << endl;
    if( t == face[4] ) cout << face[0] << endl;
 } else if( s == face[3] ){
    if( t == face[0] ) cout << face[4] << endl;
    if( t == face[4] ) cout << face[5] << endl;
    if( t == face[5] ) cout << face[1] << endl;
    if( t == face[1] ) cout << face[0] << endl;
 } else if( s == face[4] ){
    if( t == face[0] ) cout << face[2] << endl;
    if( t == face[2] ) cout << face[5] << endl;
    if( t == face[5] ) cout << face[3] << endl;
    if( t == face[3] ) cout << face[0] << endl;
 } else if( s == face[5] ){
    if( t == face[1] ) cout << face[3] << endl;
    if( t == face[3] ) cout << face[4] << endl;
    if( t == face[4] ) cout << face[2] << endl;
    if( t == face[2] ) cout << face[1] << endl;
 }
}
};

int main(){
  Dice p1;
  int q;

  p1.scan();
  cin >> q;

  for( int i = 0; i < q; i++){
    cin >> p1.s >> p1.t;
    p1.determine();
  }

  return 0;
}