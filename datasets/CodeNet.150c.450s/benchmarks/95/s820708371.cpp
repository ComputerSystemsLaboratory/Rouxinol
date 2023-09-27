#include <iostream>
using namespace std;

int main(){
  int cnt,n;
  char f[3],st;
  while (1){
    cin >> n;
    if (n==0)return 0;
    cnt=0;
    st='-';
    for (int i=0;i<n;i++) {
      cin >> f;
      if (st=='-')st=f[0];
      else{
	if (st!=f[0]) {
	  cnt++;
	}
	st='-';
      }
    }
    cout << cnt << endl;
  }
  return 0;
}