#include <iostream>
using namespace std;

int es(int *A,int len,int i,int m,int sum){
  if (len==i)return 0;
  if (sum+A[i] == m) return 1;
  if (es(A,len,i+1,m,sum))return 1;
  return es(A,len,i+1,m,sum + A[i]);
}

int main(){
  int n,A[30],q,m,i;

  cin >> n;

  for (i=0;i<n;i++)
    cin >> A[i];

  cin >> q;

  for (i=0;i<q;i++){
    cin >> m;
    if (es(A,n,0,m,0))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
  return 0;
}