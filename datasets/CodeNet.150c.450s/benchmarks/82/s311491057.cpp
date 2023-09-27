#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cmath>
#include <math.h>
using namespace std;

struct cubes {
  int n;
  int e;
  int w;
  int s;
  int t;
  int b;
};

void spin(cubes* cube){
  int tmp;
      tmp = cube->n;
      cube->n = cube->e;
      cube->e = cube->s;
      cube->s = cube->w;
      cube->w = tmp; 
}

void roll(cubes* cube, char dst){
  int tmp;
  switch(dst){
    case 'N' :
      tmp = cube->b;
      cube->b = cube->n;
      cube->n = cube->t;
      cube->t = cube->s;
      cube->s = tmp; 
      break;
    case 'E' :
      tmp = cube->b;
      cube->b = cube->e;
      cube->e = cube->t;
      cube->t = cube->w;
      cube->w = tmp; 
      break;
    case 'W' :
      tmp = cube->b;
      cube->b = cube->w;
      cube->w = cube->t;
      cube->t = cube->e;
      cube->e = tmp; 
      break;
    case 'S' :
      tmp = cube->b;
      cube->b = cube->s;
      cube->s = cube->t;
      cube->t = cube->n;
      cube->n = tmp; 
      break;
    default : break;
  }
}

int main(){
  cubes cube;
  int cnt=0;
  int a,b,n;
  cin >> cube.t >> cube.s >> cube.e >> cube.w >> cube.n >> cube.b;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    cnt=0;
    while(cube.t!=a){
      roll(&cube,'S');
      cnt++;
      if(cnt>3){
        cnt=0;
        spin(&cube);
      }
    }
    while(cube.s!=b){
      spin(&cube);
    }
    cout << cube.e << endl;
  }
}
