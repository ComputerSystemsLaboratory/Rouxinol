#include <iostream>
#include <cmath>


using namespace std;

int main(){
  while(true){
	int a, b; if(!(cin >> a >> b)) return 0;
	cout << (a+b == 1? 0: 1+(int)log10(a+b)) << endl;
  }
  return 0;
}