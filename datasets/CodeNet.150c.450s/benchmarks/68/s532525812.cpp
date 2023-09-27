#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> s;
int main(){
  int i,j,min=10000000;
  while(1){
    cin >> n;
    if(n==0)break;
    min =10000000;
    for(i=0;i<n;i++){
      cin >> j;
      a.push_back(j);
    }
    sort(a.begin(),a.end());
    for(i=0;i<n-1;i++)if(min>a[i+1]-a[i])min = a[i+1]-a[i];
    cout << min << endl;
    while(a.size())a.pop_back();
  }
  return 0;
}

