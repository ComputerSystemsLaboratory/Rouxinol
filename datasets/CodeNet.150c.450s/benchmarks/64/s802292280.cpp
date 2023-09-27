#include <iostream>

using namespace std;

int A[20];
int M[200];

bool check(int M,int i){
  if(i<0){
    return M == 0;
  }
  return check(M-A[i],i-1)||check(M,i-1);
}

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;++i){
    cin >> A[i] ;
  }
  int q;
  cin >> q;
  for(int i=0;i<q;++i){
    int M;
    cin >> M;
    if(check(M,n-1)){
      cout << "yes" << endl;
    }else{
      cout << "no" << endl;
    }
  }

  return 0;
}