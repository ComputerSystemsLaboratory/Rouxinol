#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  int n; cin>>n;
  vector<string> ans;
  while(n--)
  {
    string on=".,!? ";
    string s; cin>>s;
    int cnt=0 ,num=0;
    string tmp;
    for(int i=0; i<s.size(); ++i)
    {
      if(num==s[i]-'0') cnt++;
      else 
      {
        if(num==1) tmp+=on[cnt%5];
        else if(num==7) tmp+=cnt%4+'p';
        else if(num==8) tmp+=cnt%3+'t';
        else if(num==9) tmp+=cnt%4+'w';
        else if(num>1) tmp+=cnt%3+'a'+3*(num-2);
        cnt=0;
        num=s[i]-'0';
      }
    }
    ans.emplace_back(tmp);
  }
  for(auto e:ans) cout<<e<<"\n";

  return 0;
}

