#include <iostream>

using namespace std;

int main() {

 
   int ans[31] = {};
  ans[1] = 1;
  ans[2] = 2;
  ans[3] = 4;
  for(int i=4;i<=30;i++) ans[i] = ans[i-3] + ans[i-2] + ans[i-1] ;
     
 while(1) {
				
   int n;
   cin >> n;
   if(n == 0) break;
   
    cout << (ans[n]/3650) +1 << endl;

  }

  return 0;

}
    