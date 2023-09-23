#include<iostream>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int vec_a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>vec_a[i][j];
    }
  }
  int vec_b[m][1];
  for(int i=0;i<m;i++){
    cin>>vec_b[i][0];
  }
  int vec_c[n][1];
  for(int i=0;i<n;i++){
    int tmp=0;
    for(int j=0;j<m;j++){
      tmp+=vec_a[i][j]*vec_b[j][0];
    }
    vec_c[i][0]=tmp;
  }
  for(int i=0;i<n;i++){
    cout<<vec_c[i][0]<<endl;
  }
}