#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
int height[10],pos,max[3];
for(int i=0;i<10;++i)cin >> height[i];
for(int i=0;i<3;++i){
 int tmp = 0;
 for(int n=0;n<10;++n){
  if(tmp<height[n]){
   tmp = height[n];
   pos = n;
  }
 }
 max[i] = tmp;
 height[pos] = 0;
}
for(int i=0;i<3;++i)
 cout << max[i] << "\n";
 return 0;
}