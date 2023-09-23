#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF){
    int sum = a + b, cnt = 1;
    while(sum /= 10) cnt++;
    cout << cnt << endl;
  }
}