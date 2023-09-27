#include <bits/stdc++.h>
using namespace std;

int a[111];
int n;

void bs(){
  bool flag = true;
  int cnt = 0;

  while(flag){
    flag = false;
    for(int j = n-1; j > 0; j--){
      if(a[j] < a[j-1]){
        cnt++;
        swap(a[j],a[j-1]);
        flag = true;
      }
    }
  }
  for(int i = 0; i < n; i++){
    if(i != n-1){
      cout << a[i] << " ";
    }else cout << a[i];
  }
  cout << endl;
  cout << cnt << endl;

}

int main(){


  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  bs();


}