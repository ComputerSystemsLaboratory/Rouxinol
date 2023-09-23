#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int a,b,ans=0;
  while(scanf("%d",&a)!=EOF){
    cin >> b;
    ans = 0;
    a += b;
    while(a >= 1){
      a /= 10;
      ans++;
    }
    cout << ans << endl;
  }
}