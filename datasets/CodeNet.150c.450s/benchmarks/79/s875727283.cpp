#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,r;
  while(cin >> n >> r, n){
    int npos[100];
    for(int i=n-1,j=0;i>=0;i--,j++){
      npos[j] = i+1;
    }
    for(int i=0;i<r;i++){
      int a,b;
      cin >> a >> b;
      int tmp[b];
      for(int j=0;j<b;j++){
	tmp[j] = npos[j+a-1];
      }
      for(int j=a+b-2;j>=b;j--){
	npos[j] = npos[j-b];
      }
      for(int j=0;j<b;j++){
	npos[j] = tmp[j];
      }
    }
    cout << npos[0] << endl;
  }
}