#include<iostream>
#include<string>
using namespace std;

class Dice{
 public:
  int face[7];

  Dice(){
   for(int i = 1; i <= 6; i++)
    cin >> face[i];
  }
 
  void roll_z(){ roll(2,3,5,4);}
  void roll_y(){ roll(1,3,6,4);} // to W
  void roll_x(){ roll(1,2,6,5);} // to N
  void roll(int i, int j, int k, int l){
   int t = face[i]; face[i] = face[j]; face[j] = face[k]; face[k] = face[l]; face[l] = t;
  }

  void Roll(char d){
   if(d == 'E') for(int i = 0; i < 3; i++) roll_y();
   if(d == 'W') roll_y();
   if(d == 'N') roll_x();
   if(d == 'S') for(int i = 0; i < 3; i++) roll_x();
  }
 };

int main(){
 Dice dice;
 string com;

 cin >> com;

 for(int i = 0; i < com.size(); i++)
  dice.Roll(com[i]);

 cout << dice.face[1] << endl;

 return 0;
}