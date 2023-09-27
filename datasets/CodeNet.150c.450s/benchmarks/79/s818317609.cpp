#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){

  int n,r;
  while(cin >> n >> r,n|r){
    vector<int>a(n);
    for(int i=0;i<n;i++)a[i]=i;

    while(r--){
      int p,c;
      cin >> p >> c;
      vector<int>t=a;
      for(int i=n-p-c+1;i<=n-p;i++)t[i+p-1]=a[i];
      for(int i=n-p+1;i<n;i++)t[i-c]=a[i];
      a=t;
    }
    cout << a[n-1]+1 << endl;
  }
  return 0;
}