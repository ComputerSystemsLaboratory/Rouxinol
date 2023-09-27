#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int ban[31];
  int a,b;
  int w;
  int n;
  cin >> w >> n;
  for(int i = 1;i <= w;i++){
    ban[i] = i;
  }
  for(int i = 0;i < n;i++){
    scanf("%d,%d",&a,&b);
    swap(ban[a],ban[b]);
  }
  for(int i = 1;i <= w;i++){
    cout << ban[i] << endl;
  }
  return(0);
}