#include <iostream>

using namespace std;

int main(){
   int a[2],in;
   a[0] = a[1] = 0;
   for(int i=0;i<2;i++){
      for(int j=0;j<4;j++){
	 cin >> in;
	 a[i] += in;
      }
   }
   cout << (a[0]>a[1]? a[0]:a[1]) << endl;
   return 0;
}