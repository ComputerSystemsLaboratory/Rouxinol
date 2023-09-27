#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a[5];
  for(int i=0;i<5;i++) cin >> a[i];
  sort(a,a+5);
  reverse(a,a+5);
  for(int i=0;i<5;i++){ 
	cout << a[i];
	if(i==4) cout << endl;
	else cout << ' ';
  }
  return 0;
}