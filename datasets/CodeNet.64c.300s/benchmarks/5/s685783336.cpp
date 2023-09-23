#include<bits/stdc++.h>
using namespace std;

int main(){
  int mt[10];
  for(int i = 0; i < 10; i++) cin >> mt[i];

  for(int i = 0; i < 3; i++){
    int *ans;
    ans = max_element(mt, mt+10);
    cout << *ans << endl;
    *(mt+(ans-mt)) = 0;
  }
}