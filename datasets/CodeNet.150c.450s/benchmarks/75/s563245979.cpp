#include <iostream>
#include <vector>

using namespace std;

unsigned int n;

void maxify(int* A, unsigned int i){
  unsigned int l, r, lar, temp;
  l = 2*i;
  r = 2*i+1;
  if(l<=n/*sizeof(A)/sizeof(unsigned int)*/ && A[l]>A[i]) lar=l;
  else lar=i;
  if(r<=n/*sizeof(A)/sizeof(unsigned int)*/ && A[r]>A[lar]) lar=r;
  if(lar!=i){
    temp=A[i];
    A[i]=A[lar];
    A[lar]=temp;
    maxify(&A[0], lar);
  }
}

void buildmax(int* A){
  for(unsigned int i=n/2/*sizeof(A)/sizeof(unsigned int)*/;i>=1;i--) maxify(A,i);
}
  
int main(){
  int x;
  vector<int> A;

  A.push_back(0);
  cin >> n;
  for(unsigned int i=1;i<=n;i++){
    cin >> x;
    A.push_back(x);
  }
  buildmax(&A.front());
  for(unsigned int i=1;i<=n;i++) cout << " " << A[i];
  cout << endl;

  return 0;
}
  