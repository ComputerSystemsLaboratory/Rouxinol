
#include <bits/stdc++.h>
#define LL               long long
#define PB               push_back
using namespace std;
int main (){
  int n,k,x; cin >> n>>k;
  int v[n];
  for (int i=0;i<n;i++){
    cin >> v[i];
  }
  for (int i=0;i<n-k;i++){
    if (v[i]<v[i+k]) cout<< "Yes"<< endl;
    else cout<< "No"<<endl;
  }
}