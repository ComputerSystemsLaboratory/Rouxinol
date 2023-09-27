#include <iostream>
 
using namespace std;
 
void call(int n, int c){
  static int i, x;
  bool end = false;
 
  if(c != 2){
    if(!c) i = 1;
    x = i;
    if(x % 3 == 0){
      cout << " " << i;
      end = true;
    }
  }
  if(x % 10 == 3 && !end){
    cout << " " << i;
    end = true;
  }
  if(!end){
    x /= 10;
    if(x){ 
      call(n, 2); 
    }
  }
 
  if(++i <= n){ 
    call(n, 1); 
  }
}
 
int main(){
  int n;
  cin >> n; call(n, 0);
  cout << endl;
 
  return 0;
}