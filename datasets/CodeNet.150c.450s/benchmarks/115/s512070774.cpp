#include <iostream>
#include <string>
using namespace std;
int A[1005][1005]={};

int main() {
  int i,j,k,q;
  cin >> q;
  string a,b;
  for(i=0;i<q;i++) {
    cin  >> a >> b;
    int al = a.size();
    int bl = b.size();
    for(j=1;j<=al;j++) {
      for(k=1;k<=bl;k++) {
        if(a[j-1]==b[k-1]) {
          A[j][k]=A[j-1][k-1]+1;
        } else {
          A[j][k]=max(A[j][k-1],A[j-1][k]);
        }
      }
    }
    cout << A[al][bl] << endl;
  }
  return 0;
}
