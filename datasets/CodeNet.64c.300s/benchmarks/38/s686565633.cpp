#include<iostream>
using namespace std;
int func(int a,int b,int c);
int ball[10];

int main(){
  int n;
  cin >> n;
  while(n--){
    for(int i=0;i<10;i++) cin >> ball[i];
    if(func(0,0,0) != 0) cout << "YES\n";
    else cout << "NO\n";
  }
}
int func(int a,int b,int c){
  int ans=0;
  if(a == 10) return 1;
  if(ball[a]>b) ans += func(a+1,ball[a],c);
  if(ball[a]>c) ans += func(a+1,b,ball[a]);
  return ans;
}
  