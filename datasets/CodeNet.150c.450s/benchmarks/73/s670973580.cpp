#include <iostream>
#include <vector>

#define INF INT_MAX

using namespace std;

vector <int> D;
int n=0;

void initRMQ(int n_){

  n = 1;
  while(n <= n_) n *= 2;
 
  D.resize(2*n-1);

  for(int i=0; i<2*n-1-1; i++) D[i] = 0;
}


void add(int k, int a){

  k += n - 1;
  D[k] += a;

  while(k > 0){
    k = (k-1) / 2;
    D[k] = D[k*2+1] + D[k*2+2];
  }
}


int query(int a, int b,int k, int l, int r){

  if(r <=a || b <= l) return 0;
  if(a <= l && r <= b) return D[k];
   
  int vl = query(a, b, k*2+1, l, (l+r)/2);
  int vr = query(a, b, k*2+2,(l+r)/2, r);
  return vl + vr;
  
}


int getSum(int a, int b){

  return query(a, b+1, 0, 0, n);
}


int main(){
  int N, q, com, x, y;

  cin >> N >> q;

  //  D.resize(N);
  initRMQ(N);

  for(int i=0; i<q; i++){
    cin >> com >> x >> y;

    if(com == 0) add(x, y);
    else if(com == 1){ cout << getSum(x, y); cout << endl;}
  }
}

