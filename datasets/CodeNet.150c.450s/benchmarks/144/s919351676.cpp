#include<vector>
#include<stdio.h>
using namespace std;
typedef vector<vector<long long>> Mat;
int n,m,l;
void proc(Mat& a,Mat& b){
  Mat res(n,vector<long long>(l));
  for(int i=0;i<n;++i){
    for(int j=0;j<l;++j){
      for(int k=0;k<m;++k){
        res[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  
  for(int i=0;i<n;++i){
    for(int j=0;j<l-1;++j){
      printf("%lld ",res[i][j]);
    }
    printf("%lld\n",res[i][l-1]);
  }
}
int main(){
  scanf("%d%d%d",&n,&m,&l);
  Mat a(n,vector<long long>(m));
  Mat b(m,vector<long long>(l));
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      scanf("%d",&a[i][j]);
  for(int i=0;i<m;++i)
    for(int j=0;j<l;++j)
      scanf("%d",&b[i][j]);
      
  proc(a,b);
  return 0;
}