#include <iostream>
#include <algorithm>

using namespace std;
int main(){
  int n;
  int s[111];
  while(cin>>n){
    if(n ==0)
      break;
    for(int i = 0;i<n;i++){
      cin>>s[i];
    }
    sort(s,s+n);
    int ans = 0;
    for(int i = 1;i<n-1;i++)
      ans += s[i];

    ans /= n-2;
    cout<<ans<<endl;
  }
  return 0;


}