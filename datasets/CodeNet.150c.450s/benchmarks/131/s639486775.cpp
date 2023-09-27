#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(true)
  {
    int a;
    int L;
    cin>>a>>L;
    if(a==0 && L==0)
    {
      break;
    }
    string tmp="";
    for(int i=0;i<L;i++)
    {
      tmp+='0';
    }
    string stra=to_string(a);
    for(int i=stra.size()-1;i>=0;i--)
    {
      tmp[i]=stra[i];
    }
    map<int,int> mp;
    mp[stoi(tmp.c_str())]=0;
    for(int i=1;i<=21;i++)
    {
    sort(tmp.begin(),tmp.end());
    int mina=stoi(tmp.c_str());
    sort(tmp.rbegin(),tmp.rend());
    int maxa=stoi(tmp.c_str());
    int diffa=maxa-mina;
    //cout<<diffa<<endl;
    if(mp.count(diffa))
      {
        cout<<mp[diffa]<<" "<<diffa<<" "<<i-mp[diffa]<<endl;
        break;
      }
      mp[diffa]=i;
      tmp="";
      for(int i=0;i<L;i++)
      {
        tmp+='0';
      }
       stra=to_string(diffa);
      for(int j=stra.size()-1;j>=0;j--)
      {
        tmp[j]=stra[j];
      }
    }
  }
  return 0;
}

