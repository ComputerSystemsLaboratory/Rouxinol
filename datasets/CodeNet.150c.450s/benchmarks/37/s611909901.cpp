#include <bits/stdc++.h>
#define EPS 1e-8
using namespace std;
typedef vector <double> vec;
typedef vector <vec> mat;

vec gauss(const mat& A,const vec&b){
  int n=A.size();
  mat B(n,vec(n+1));
  
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) B[i][j]=A[i][j];

  for(int i=0;i<n;i++)B[i][n]=b[i];

  for(int i=0;i<n;i++){
    int pivot=i;
    for(int j=i;j<n;j++){
      if(abs(B[j][i])>abs(B[pivot][i]))pivot=j;
    }
    swap(B[i],B[pivot]);
    if(abs(B[i][i])<EPS)return vec();
    
    for(int j=i+1;j<=n;j++) B[i][j]/=B[i][i];
    for(int j=0;j<n;j++){
      if(i!=j){
	for(int k=i+1;k<=n;k++)B[j][k]-=B[j][i]*B[i][k];
      }
    }
  }
    vec x(n);
    for(int i=0;i<n;i++) x[i]=B[i][n];
    return x;
}



int main(){
  while(1){
    mat A(2,vec(2));
    vec b(2);
    if(!(cin>>A[0][0]))break;
    cin>>A[0][1]>>b[0];
    cin>>A[1][0]>>A[1][1]>>b[1];
    vec ans=gauss(A,b);
    printf("%.3f %.3f\n",ans[0],ans[1]);
  }
  return 0;
}