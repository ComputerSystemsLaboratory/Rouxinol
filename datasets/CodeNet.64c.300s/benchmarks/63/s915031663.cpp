#include <iostream>
#include <vector>
using namespace std;

int main(){
  int a, b;

  while(cin >> a >> b){
    int a_lcm = a, b_lcm = b;
    while(a!=0 &&b!=0){
      if(a < b)
	swap(a,b);
      int tmp = b;
      b = a%b;
      a = tmp;
    }
    cout << a << " " << a_lcm/a*b_lcm << endl;

  }
  
  return 0;
}