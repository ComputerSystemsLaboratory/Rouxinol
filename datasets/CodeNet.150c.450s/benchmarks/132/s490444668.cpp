#include <iostream>
using namespace std;

int main() {
  int n,p;
  
  while(1) {
  cin >> n >> p;
  if(n == 0 && p == 0) break;
  int a[51]={};

  int ima = 0;
  int stn=p;
  while(1) {
 
    if(stn > 0) {
    a[ima%n] += 1;
    stn--;
    if(a[ima%n] == p) break;
    }
    else if(stn == 0){
      stn+=a[ima%n];
      a[ima%n] = 0;
    }
    ima++;
  }

  cout << (ima)%n<<endl;
  }

  return 0;

}