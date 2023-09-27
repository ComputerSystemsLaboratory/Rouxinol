#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int W, N; cin >> W >> N;
  int a[31], b[31];
  for(int i=0;i<N;++i)
    scanf("%d,%d", &a[i], &b[i]);
  
  int x[31];
  for(int i=1;i<=W;++i){
    int n = i;
    for(int j=0;j<N;++j){
      if(n == a[j])
	n = b[j];
      else if(n == b[j])
	n = a[j];
    }
    x[n] = i;
  }
  for(int i=1;i<=W;++i)
    cout << x[i] << endl;

  return 0;
}