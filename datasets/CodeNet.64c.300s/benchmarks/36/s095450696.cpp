#include <iostream>
using namespace std;

void order(int a, int b, int c){
  int max, scnd, thrd;
  max = a, scnd = b;
  
  if (a < b) {
    max = b;
    scnd = a;
  }
  if (max < c) {
    thrd = scnd ;
    scnd = max;
    max = c;
  }else if(scnd > c){
    thrd = c;
  }else{
    thrd = scnd;
    scnd = c;
  }
  cout << thrd << " " << scnd << " " << max << endl;
}


int main(){
  int a, b, c;

  cin >> a >> b >> c;

  order(a, b, c);
}