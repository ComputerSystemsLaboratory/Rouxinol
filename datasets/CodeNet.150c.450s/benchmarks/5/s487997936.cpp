#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int data[n];
  for(int i=0;i<n;i++) cin >> data[i];
  for(int i=n-1;i>=0;i--) cout << (i!=n-1?" ":"") << data[i];
  cout << endl;
}
