#include<bits/stdc++.h>
using namespace std;
int main(){
  string s[]={"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  int n; cin>>n;
  while(n--){
    string t,ans;
    cin >> t;
    int cnt=-1,num=0;
    for(int i=0;i<t.size();++i){
      if(t[i]=='0'){
        if(cnt!=-1){
          ans+=s[num][cnt%s[num].size()];
          cnt=-1;
        }
      }else{
        num=t[i]-'0';
        cnt++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}