#include<bits/stdc++.h>
using namespace std;
int p(int i){return i/2;}
int l(int i){return i*2;}
int r(int i){return i*2+1;}
int main(){
  int h,a[300];
  cin >> h;
  for(int i=1;i<=h;i++)cin >> a[i];
  for(int i=1;i<=h;i++){
    cout << "node " << i << ": key = " << a[i] << ", ";
    if(p(i)>=1)cout << "parent key = " << a[p(i)]<<", ";
    if(l(i)<=h)cout << "left key = " << a[l(i)] << ", ";
    if(r(i)<=h)cout << "right key = " << a[r(i)] << ", ";
    cout << endl;
  }
}

  