#include<bits/stdc++.h>
using namespace std;
int main(){
  int s;
  cin >> s;
  int h,m;
  h = s/3600;
  s %= 3600;
  m = s/60;
  s %= 60;
  printf("%d:%d:%d\n",h,m,s);
}
