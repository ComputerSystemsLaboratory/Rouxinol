#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n,l[3];
  cin >> n;
  for(int i=0;i<n;i++){
	cin >> l[0] >> l[1] >> l[2];
	sort(l,l+3);
	if(l[2]*l[2] == l[0]*l[0]+l[1]*l[1]) cout << "YES" << endl;
	else cout << "NO" << endl;
  }
  return 0;
}