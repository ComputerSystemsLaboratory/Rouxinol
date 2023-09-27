#include<iostream>
using namespace std;

class Dice{
  public:
    int face[6];

    void north(){
      int tmp = face[0];
      face[0] = face[1];
      face[1] = face[5];
      face[5] = face[4];
      face[4] = tmp;
    }

    void south(){
      int tmp = face[0];
      face[0] = face[4];
      face[4] = face[5];
      face[5] = face[1];
      face[1] = tmp;
    }

    void west(){
      int tmp = face[0];
      face[0] = face[2];
      face[2] = face[5];
      face[5] = face[3];
      face[3] = tmp;
    }

    void east(){
      int tmp = face[0];
      face[0] = face[3];
      face[3] = face[5];
      face[5] = face[2];
      face[2] = tmp;
    }

    void print(int x){
      cout << face[x-1] << endl;
    }
};

int main(){
  Dice d;
  char dir;

  for ( int i = 0; i < 6; i++ ){
    cin >> d.face[i];
  }

  while ( cin >> dir ){
    if ( dir == 'N' ) d.north();
    else if ( dir == 'S' ) d.south();
    else if ( dir == 'W' ) d.west();
    else d.east();
  }

  d.print(1);

  return 0;
}
      
