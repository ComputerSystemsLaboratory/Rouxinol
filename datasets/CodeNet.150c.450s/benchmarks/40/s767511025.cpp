#include <iostream>
#include <vector>
#include <string>

using namespace std;

class cdice{
private:
  int dice[6];
public:
  void set( int i, int x);
  int get( int i);
  void change(char c);
  void show();
};

void cdice::show(){
  for( int i = 0; i < 6 ; ++i){
    cout << dice[i] << endl;
  }
}

void cdice::set( int i, int x){
  dice[i-1] = x;
}

int cdice::get( int i ){
  return dice[i-1];
}

void cdice::change( char c){
  int temp[6];
  for( int i = 0; i < 6; ++i){
    temp[i] = dice[i];
  }
  if( c == 'S'){
    dice[0] = temp[4];
    dice[1] = temp[0];
    dice[5] = temp[1];
    dice[4] = temp[5];
  }

  if(c == 'N'){
    dice[0] = temp[1];
    dice[1] = temp[5];
    dice[5] = temp[4];
    dice[4] = temp[0];
  }

  if( c == 'W'){
    dice[0] = temp[2];
    dice[2] = temp[5];
    dice[5] = temp[3];
    dice[3] = temp[0];
  }

  if( c == 'E'){
    dice[0] = temp[3];
    dice[3] = temp[5];
    dice[5] = temp[2];
    dice[2] = temp[0];
  }
}


int main(){
  cdice d;
  int temp;
  string str;

  for( int j = 0; j < 6; ++j){
    cin >> temp;
    d.set( j+1, temp);
  }

  cin >> str;
  for( int i = 0; i < str.size(); ++i){
    d.change( str[i]);
  }

  cout << d.get(1) << endl;;
}