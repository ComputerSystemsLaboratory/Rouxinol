#include <iostream>

using namespace std;

int main(){
  int R,C,a[10][10000];
  while(cin>>R>>C,R||C){
    for(int i=0;i<R;++i){
      for(int j=0;j<C;++j) cin>>a[i][j];
    }
    int m=0;
    for(int i=0;i<(1<<R);++i){
      int n=0;
      for(int j=0;j<C;++j){
	int p=0;
	for(int k=0;k<R;++k) if(a[k][j]^(i>>k)&1) ++p;
	n+=max(p,R-p);
      }
      m=max(m,n);
    }
    cout<<m<<endl;
  }
  return 0;
}