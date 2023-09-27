#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int main(){
  int n,i,j,k;
  vector<int> x(10010,0);
  cin >> n;
  for(i=1;i<=100;i++){
    for(j=1;j<=100;j++){
      for(k=1;k<=100;k++){
        if(i*i+j*j+k*k+i*j+j*k+k*i<=n){
          x[i*i+j*j+k*k+i*j+j*k+k*i]++;
        }
      }
    }
  }
  for(i=1;i<=n;i++){
    cout << x[i] << endl;
  }
  return 0;
}