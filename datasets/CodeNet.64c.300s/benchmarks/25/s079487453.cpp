#include<iostream>
using namespace std;
int main(){

  int a[4],b[4],n,m;

  while(cin >> a[0]){
    n = 0;
    m = 0;
    cin >> a[1] >> a[2] >> a[3];
    for(int i=0;i<4;i++){
      cin >> b[i];
      if(a[i] == b[i]) n++;
      for(int j=0;j<4;j++){
	if(b[i] == a[j]) m++;
      }
    }
    
    cout << n << " " << (m-n) << endl;
  }
  return (0);
}