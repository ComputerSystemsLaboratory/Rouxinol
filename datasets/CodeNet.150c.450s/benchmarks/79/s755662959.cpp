/*Hanafuda Shuffle*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main(void){
  int d=0;
  int n,r,p,c;
  while(d==0){
    cin >> n >> r;
    if(n==0 && r==0)break;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
      a[i]=i+1;
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<r;i++){
      cin >> p >> c;
      rotate(a.begin(),a.begin()+p-1,a.begin()+p-1+c);
    }
    cout << a[0] << endl;
  }
  return 0;
}