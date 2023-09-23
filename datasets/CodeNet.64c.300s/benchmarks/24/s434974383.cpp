#include<iostream>
using namespace std;

int main(){
  int i, n, s=0, t=0;
  int a[10000], b[10000];

  while(1){
    cin >> n;
    if (n==0) break;

    for (i=0; i<n; i++){
      cin >> a[i] >> b[i];
      if (a[i]>b[i]){
	s=s+a[i]+b[i];
      } else if (a[i]<b[i]){
	t=t+a[i]+b[i];
      } else {
	s+=a[i]; t+=b[i];
      }
    }
    cout << s << " " << t << endl;
    s=0; t=0;
  }

  return 0;
}