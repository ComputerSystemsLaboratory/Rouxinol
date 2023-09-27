#include <iostream>
using namespace std;

int main(){
  int hist[100];
  for(int i=0; i<100;i++) hist[i] = 0;
 
  int n;
  while(cin >> n) hist[n]++;
  
  int maxv = 0;
  for(int i=0;i<100;i++){
    if(hist[i] >  maxv) maxv = hist[i];
  }
  
  for(int i=0;i<100;i++){
    if(maxv == hist[i]) cout << i << endl;
  }
  return 0;
}