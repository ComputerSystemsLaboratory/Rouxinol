#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j;
  int n;
  cin>>n;
  rep(i,n){
    set<string> st;
    string s,s1,s2,s3,s4;
    cin>>s;
    rep(j,s.size()-1){
      s1=s2=s.substr(0,j+1);
      s3=s4=s.substr(j+1,s.size()-1-j);
      reverse(all(s2));
      reverse(all(s4));
      st.insert(s1+s3); st.insert(s1+s4);
      st.insert(s3+s1); st.insert(s4+s1);
      st.insert(s2+s3); st.insert(s2+s4);
      st.insert(s3+s2); st.insert(s4+s2);
    }
    cout<<st.size()<<endl;
  }
}