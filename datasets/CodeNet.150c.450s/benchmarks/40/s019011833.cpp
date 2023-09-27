#include<iostream>
#include<string>
using namespace std;

class Dice{
	  public:
      int f[7];
      Dice(){}
      void roll_n(){roll(1, 2, 6, 5);}
      void roll_w(){roll(1, 3, 6, 4);}
      void roll(int a, int b, int c, int d){
      int p = f[a]; f[a] = f[b]; f[b] = f[c]; 
      f[c] = f[d]; f[d] = p;
      }
      void move(char poi){
          if(poi == 'N') roll_n();
          if(poi == 'S')
           for(int i = 0;i < 3;++i) roll_n();
          if(poi == 'W') roll_w();
          if(poi == 'E')
           for(int i = 0;i < 3;++i) roll_w();   
      }
};

int main(){
   Dice g;
   string lm;
   for(int r = 1;r < 7;++r) cin >> g.f[r];   
   cin >> lm;
   for(int d = 0;d < lm.size();++d){
     g.move(lm[d]);
  }      
  cout << g.f[1] << endl;
  return 0;
}