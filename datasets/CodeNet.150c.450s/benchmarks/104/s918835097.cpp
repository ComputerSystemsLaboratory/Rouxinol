#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
  int s[31];
  int w,n;

  for(int i = 0;i<31;i++) s[i] = i;

  cin >> w;
  cin >> n;

  for(int i=0;i<n;i++){
    int a, b, buff;
    scanf("%d,%d",&a,&b);
    // swap(s[a-1], s[b-1]);
    buff = s[a];
    s[a] = s[b];
    s[b] = buff;
  }

  for(int i = 1;i<=w;i++) cout << s[i] << endl;

  return 0;
}