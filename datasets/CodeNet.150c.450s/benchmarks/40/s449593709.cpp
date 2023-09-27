#include<iostream>
using namespace std;

class Dice{
public:
  int n, face[6];
  char m[101] = {};

  void scan(){
    for( int i = 0; i < 6; i++){
      cin >> face[i];
    }
  }

  void move(){
     for( int i = 0; i < 101; i++){
	n = face[0];
        if( m[i] == 'N'){
           face[0] = face[1];
	   face[1] = face[5];
	   face[5] = face[4];
	   face[4] = n;
        } else if( m[i] == 'S'){
           face[0] = face[4];
	   face[4] = face[5];
	   face[5] = face[1];
	   face[1] = n;
	      } else if( m[i] == 'E'){
	   face[0] = face[3];
	   face[3] = face[5];
	   face[5] = face[2];
	   face[2] = n;
        } else if( m[i] == 'W'){
	   face[0] = face[2];
	   face[2] = face[5];
	   face[5] = face[3];
	   face[3] = n;
	} else break;
    }
  }	      
};

int main(){
  Dice p1;
  p1.scan();
  cin >> p1.m;
  p1.move();
  cout << p1.face[0] << endl;

  return 0;
}