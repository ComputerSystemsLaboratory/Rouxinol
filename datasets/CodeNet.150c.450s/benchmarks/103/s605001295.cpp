#include <iostream>
using namespace std;
int solve(int n,int k,int m) {
	int i,s=0;
	if (n==0) { if (k==0) return 1; else return 0;}
	for (i=m;i<11-n;i++) s+=solve(n-1,k-i,i+1);
    return s;
}
int main() {
  int n,k;
  while(cin >> n >> k) {
	if (n==0 && k==0) break;  
    cout << solve(n,k,0) << endl;
  }
  return 0;
}