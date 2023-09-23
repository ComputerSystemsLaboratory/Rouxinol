//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A&lang=jp

#include <iostream>
#include <algorithm>
using namespace std;
//int n,counter = 0;
//int a[n];




int main(){
  int n,counter = 0;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  bool flag = true;
  while(flag){
    flag = false;
    for(int i=n-1; i>0; i--){
      if(a[i] < a[i-1]){
        swap(a[i], a[i-1]);
        counter++;
        flag = true;
      }
    }
  }
    for(int i=0; i<n-1; i++){
    cout  << a[i] << " ";
  }
  cout << a[n-1] << endl;
  cout << counter << endl;
}