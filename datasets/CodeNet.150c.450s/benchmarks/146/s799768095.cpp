#include<iostream>
#include<cmath>
//#define e 0.00000000001
using namespace std;
int main(){
  double a[2],b[2],c[2],d[2];
  double e = 0.0000000001;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1] >> d[0] >> d[1];
    if(abs((b[1]-a[1])*(d[0]-c[0])-(d[1]-c[1])*(b[0]-a[0]))<e) cout << "YES" << endl;
    else cout << "NO" << endl;
  }   
  return 0;
}