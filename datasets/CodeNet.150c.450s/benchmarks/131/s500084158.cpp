#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

#define CH(N,A,B) (A<=N&&N<B)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=(b-1);a<=i;i--)

using namespace std;

string S;
int L;

int main() {

  while(1){
    cin>>S>>L;
    if(S=="0"&&L==0) break;
    int ans = 0;
    set<string> st;
    map<string, int> m;
    while(1){
      //00????????????
      string ts = "";
      REP(i,0,L-S.size()) ts += "0";
      S = ts + S;
      //check
      if(st.find(S) != st.end()){
        cout<<m[S]<<" "<<stoi(S)<<" "<<ans-m[S]<<endl;
        break;
      }
      st.insert(S);
      m[S] = ans;
      ans++;
      //?????°?????????
      vector<char> v[2];
      REP(i,0,S.size()) v[0].push_back(S[i]), v[1].push_back(S[i]);
      sort(v[0].begin(),v[0].end()); sort(v[1].begin(),v[1].end(),greater<char>());
      //int?????????
      int num[2] = {0,0};
      REP(k,0,2){
        int di = 1;
        REP(i,0,v[k].size()){
          num[k] += ((int)(v[k][v[k].size()-1-i]-'0'))*di;
          di *=10;
        }
      }
      int diff = num[1] - num[0];
      //00????????????
      S = to_string(diff);
      ts = "";
      REP(i,0,L-S.size()) ts += "0";
      S = ts + S;
    }

  }
  return 0;
}