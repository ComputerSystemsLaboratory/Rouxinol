#include <iostream>
#define MAX 10000

using namespace std;

int main(){
  int n; cin >> n;
  int a[n+1],b[n+1];
  for(int i=1;i<=n;i++) cin >> a[i];
  //c[i] shows how many times i appears.
  int c[MAX+1];
  for(int i=0;i<=MAX;i++) c[i]=0;
  for(int i=1;i<=n;i++) c[a[i]]++;
  for(int i=1;i<=MAX;i++) c[i]=c[i]+c[i-1];
  for(int i=n;i>=1;i--){
    b[c[a[i]]]=a[i];
    c[a[i]]--;
  }
  for(int i=1;i<=n;i++){
    if(i==n) cout << b[i] << endl;
    else cout << b[i] << " ";
  }
}