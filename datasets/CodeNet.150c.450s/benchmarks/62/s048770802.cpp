#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

//a,b,c
//a,c,b
//c,a,b
//b,a,c
//c,b,a
//b,c,a

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if(a < b){
    if(b < c){
      cout << a << " " << b << " " << c << endl;
    }else if(a < c){
      cout << a << " " << c << " " << b << endl;
    }else{
      cout << c << " " << a << " " << b << endl;
    }
  }else{
    if(a < c){
      cout << b << " " << a << " " << c << endl;
    }else if(c < b){
      cout << c << " " << b << " " << a << endl;
    }else{
      cout << b << " " << c << " " << a << endl;
    }
  }
    return 0;
}

