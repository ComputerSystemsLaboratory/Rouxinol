#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int cnt=0;cnt<n;cnt++){
    string s0;
    map <string,bool> li;
    int r=1;
    cin>>s0;
    li[s0]=1;
    for(int i=1;i<s0.size();i++){
      string s=s0;
      reverse(s.begin()+i,s.end());
      if(!li[s]) r++;
      li[s]=1;
      reverse(s.begin(),s.begin()+i);
      if(!li[s]) r++;
      li[s]=1;
      reverse(s.begin()+i,s.end());
      if(!li[s]) r++;
      li[s]=1;
      s=s0.substr(i)+s0.substr(0,i);
      if(!li[s]) r++;
      li[s]=1;
      reverse(s.end()-i,s.end());
      if(!li[s]) r++;
      li[s]=1;
      reverse(s.begin(),s.end()-i);
      if(!li[s]) r++;
      li[s]=1;
      reverse(s.end()-i,s.end());
      if(!li[s]) r++;
      li[s]=1;
    }
    cout<<r<<endl;
  }
  return 0;
}