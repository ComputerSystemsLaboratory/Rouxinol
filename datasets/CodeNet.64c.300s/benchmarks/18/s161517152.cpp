#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n;
int combination[128];

int main(){

  combination[0] = 1;
  
    for (int i = 1; i <= 32; ++i)
    {
      combination[i] = combination[i-1];
      if(i>1) combination[i] += combination[i-2];
      if(i>2) combination[i] += combination[i-3];
    }

while(cin >> n && n){
    cout << ((combination[n]+9)/10+364)/365 << endl;

  }


return 0;

}