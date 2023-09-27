#include <bits/stdc++.h>
using namespace std;
int main(){
  int k=0,c;
string s,d;
cin>>s;
c=s.size();
while((--c)>0)s[c]=tolower(s[c]);
while(cin>>d){
  if(d=="END_OF_TEXT")break;
c=d.size();
while((--c)>-1)d[c]=tolower(d[c]);
  if(s==d)k++;
}
cout<<k<<endl;
}