#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  while(1){
    int n;
    int mi=1000001;
    cin >> n;
    if(n==0)break;
    vector<int>a(n,0);
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
      mi=min(mi,a[i]-a[i-1]);
    }
    cout << mi << endl;
  }
  return 0;
}