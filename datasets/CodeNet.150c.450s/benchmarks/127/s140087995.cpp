#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  for(int cnt=0;cnt<n;cnt++){

  set <string> li;
  string s;
  cin>>s;

  for(int i=0;i<(int)s.size();i++){

    string s1,s2;
    s1=s.substr(0,i);
    s2=s.substr(i,(int)s.size()-i);

    // cout<<s1<<" "<<s2<<endl;

    li.insert(s1+s2);
    li.insert(s2+s1);

    reverse(s1.begin(),s1.end());

    li.insert(s1+s2);
    li.insert(s2+s1);

    reverse(s2.begin(),s2.end());

    li.insert(s1+s2);
    li.insert(s2+s1);

    reverse(s1.begin(),s1.end());

    li.insert(s1+s2);
    li.insert(s2+s1);

  }

  cout<<li.size()<<endl;

  }

  return 0;

}

