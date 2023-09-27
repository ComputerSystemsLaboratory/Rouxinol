#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int w, n, a, b, p[30], tmp;

  cin >> w >> n;

  for(int i=1; i<=w; i++){
    p[i] = i;
  }

  for(int i=1; i<=n; i++){
    scanf("%d,%d", &a, &b);
    tmp = p[a];
    p[a] = p[b];
    p[b] = tmp;
  }

  for(int i=1; i<=w; i++){
    cout << p[i] << endl;
  }

  return 0;

}