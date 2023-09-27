#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;

signed main(){
  vector<string> str={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    vector<pair<int,int>> p;
    REP(i,s.size()){
      int c=s[i]-'0';
      if(c==0)continue;
      int tmp=-1;
      while(s[i]!='0'){
        tmp++;
        i++;
      }
      p.PB(MP(c-1,tmp));
    }
    REP(i,p.size()){
      int f=p[i].FR;int sc=p[i].SC;
      if(f==0)cout<<str[0][sc%5];
      else if(f==6||f==8)cout<<str[f][sc%4];
      else cout<<str[f][sc%3];
    }
    cout<<endl;
   }
  return 0;
}

