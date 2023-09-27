#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin>>n,n!=0){
    n = 1000-n;
    const vector<int> list = {500,100,50,10,5,1};
    int ans = 0;
    for(int i=0;i<list.size();i++){
      ans += n / list[i];
      n = n % list[i];
    }
    cout<<ans<<endl;
  }
}