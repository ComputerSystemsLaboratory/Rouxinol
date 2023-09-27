#include <iostream>

using namespace std;

int A[200000]={0};
int W[200000]={0};

using llong = long long;
llong inversion_num(int l,int r);
llong merge(int l,int r);

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;++i)
    cin >> A[i];

  cout << inversion_num(0,n) << endl;
  return 0;
}

llong inversion_num(int l,int r){
  //cout << "[" << l << "," << r << ")" << endl;
  if(l>=r-1) return 0;
  
  int m = (l+r)/2;

  llong l_invn = inversion_num(l,m);
  llong r_invn = inversion_num(m,r);
  llong m_invn = merge(l,r);

  return l_invn + r_invn + m_invn;
}

llong merge(int l,int r){
  int m = (l+r)/2;
  int i=l,j=m,k=0;
  llong cnt = 0;
  // l <= i && i < m , m <= j && j < r
  // 0 < k && k < r-l
  while(i<m&&j<r&&k<r-l){
    if(A[i]<=A[j]){
      W[k++] = A[i++];
    }else{
      W[k++] = A[j++];
      cnt += m-i;
    }
  }

  while(i<m){
    W[k++] = A[i++];
    //cnt += m-i;
  }
  while(j<r){
    W[k++] = A[j++];
    //cnt += m-i;
  }
  
  copy(W,W+(r-l),A+l);
  return cnt;
}