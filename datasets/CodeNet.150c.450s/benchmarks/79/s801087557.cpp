#include <iostream>
#include <string>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;
void init(int *a, int b){
  for(int i=1;i<=b;i++){
    a[i]=b-i+1;
  }
}

int main(int argc, char *argv[])
{
  int n, r;
  int p, c;
  int hanafuda[51];
  int tmp[51];
  while(1){
    cin >> n >> r;
    if(n+r==0){
      return 0;
    }
    init(hanafuda, n);
    for(int i=0;i<r;i++){
      cin >> p >> c;

      for(int k=1;k<p;k++){
        tmp[c+k]=hanafuda[k];
      }

      for(int k=p;k<p+c;k++){
        tmp[k-p+1]=hanafuda[k];
      }

      for(int l=1;l<c+p;l++){
        hanafuda[l]=tmp[l];
      }
    }

    cout << hanafuda[1] << endl;
  }
  return 0;
}

