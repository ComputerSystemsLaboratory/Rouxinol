#include <iostream>
using namespace std;

unsigned long long ull[45];

int main(){
  int i;
  int n;
  ull[0]=1;
  ull[1]=1;
  cin >> n;
  for(i=2;i<=n;i++){
    ull[i]=ull[i-1]+ull[i-2];
  }
  cout << ull[n] << endl;
  return 0;
}