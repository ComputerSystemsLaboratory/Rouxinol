#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[30];
  char gomi;
  int w,n,box1,box2;
  cin >> w >> n;
  for(int i=0;i<w;i++){
    a[i] = i+1;
  }
  for(int i=0;i<n;i++){
    cin >> box1 >> gomi >> box2;
    swap(a[box1-1],a[box2-1]);
  }
  for(int i=0;i<w;i++){
    cout << a[i] << endl;
  }
}