#include<iostream>
using namespace std;

int main(){
  int n, p, a[50];
  while(cin >> n >> p && n && p){
    for(int k=0;k<n;k++){
      a[k]=0;
    }
    int i, f=p;
    for(i=0;;i=(++i)%n){
      if(p) {
        a[i]++;
        if(a[i]==f) break;
        p--;
      }
      else {
        p += a[i];
        a[i] = 0;
      }
    }
    cout << i << endl;
  }
  return 0;
}