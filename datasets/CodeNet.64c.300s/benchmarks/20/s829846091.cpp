#include <iostream>
#include <stack>
 
using namespace std;
 
int main(){
  int d;
  while(cin >> d){
    int s = 0,n=1;
    while((d*n)<=600-d){
      s += (d*n)*(d*n)*d;
      n++;
    }
    cout << s << endl;
  }
  return 0;
}