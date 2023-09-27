#include <iostream>
using namespace std;

int main()
{
  while(1){
    int n, p;
    cin >> n >> p;
    if(n == 0 && p == 0){
      break;
    }else{
      int c[50] = {};
      int i = 0, b = p;
      while(1){
	if(p){
	  c[i]++;
	  p--;
	}else{
	  p += c[i];
	  c[i] = 0;
	}
	if(c[i] == b){
	  cout << i << endl;
	  break;
	}
	i++;
	if(i > n - 1)
	  i = 0;
      }
    }
  }
}