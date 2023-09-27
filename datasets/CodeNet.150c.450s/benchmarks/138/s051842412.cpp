#include <iostream>
#include <cmath>
using namespace std;

int x,y;

int euclid(int x, int y){
  if (y == 0){
    return x;
	}
  else return euclid(y, x % y);
  }


int main(){
 cin >> x >> y;
 cout << euclid(x,y) << endl;
}

int euclude(int x, int y){
  if (y == 0){
    return x;
	}
  else return euclid(y, x % y);
  }