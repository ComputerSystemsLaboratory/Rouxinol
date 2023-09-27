#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

using namespace std;

const int INF = 1000000000;
const double eps = 1e-8;

int main(void) {
  string tb[] = {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  int sz[]={0,5,3,3,3,3,3,4,3,4};
  int n;cin>>n;
  REP(i,n){
    string s;
    cin>>s;
    int cnt = 0;
    int ochar = 0;
    REP(j,s.size()){
      if(s[j]=='0'){
        if(ochar!=0)
          cout<<tb[ochar][cnt%sz[ochar]];
        ochar = 0;
        cnt=0;
      }else{
        if(ochar==(s[j]-'0'))
          cnt++;
        else{
          cnt=0;
          ochar=s[j]-'0';
        }
      }
    }
    cout<<endl;
  }
  return 0;
}