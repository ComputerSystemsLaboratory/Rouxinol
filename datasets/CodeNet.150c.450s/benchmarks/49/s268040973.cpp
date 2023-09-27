#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n;
  vector<int> s;

  cin>>n;
  while(n!=0){
    s.resize(n);

    for(int i=0;i<n;i++){
      cin>>s[i];
    }
    sort(s.begin(),s.end());
    s.erase(s.begin());
    s.erase(s.end()-1);

    int ans = 0;

    for(int i=0;i<n-2;i++){
      ans += s[i];
    }

    cout<<ans/(n-2)<<endl;

    cin>>n;
  }
  return 0;
}