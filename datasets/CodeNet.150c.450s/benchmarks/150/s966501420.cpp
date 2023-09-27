#include <iostream>
#include <vector>
using namespace std;
int main(){

  int n,a[10001]={},t;
  vector <int> res;
  cin>>n;
  for(int i=0;i<n&&cin>>t;i++) a[t]++;
  for(int i=0,cnt=0;i<10001;i++) for(;a[i];a[i]--){
      if(cnt) cout<<" "<<i;
      else cout<<i;
      cnt++;
    }
  cout<<endl;
  return 0;

}

