#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int l[200];
  int m[200];
  int k=-1;
  for(int i=0;!cin.eof();i++,k++){
    cin >> l[i];
    cin >> m[i];
  }

  for(int j=0;j<k;j++){
  cout<< (int)log10(l[j]+m[j])+1 << endl;
  }
  return 0;
}  