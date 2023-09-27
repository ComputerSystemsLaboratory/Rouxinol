#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
using in = int64_t;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define Yes cout<<"Yes"<<endl 
#define No cout<<"No"<<endl
#define yes cout<<"yes"<<endl 
#define no cout<<"no"<<endl
#define vec(a,y,x)  vector<vector<char>> a (y,vector<char>(x))
const double PI=3.14159265358979323846;
const in MOD = 1000000007;
const in INF=1e18+7;
const int inf=1e9+7;
const vector<int> dx={1,0,-1,0};
const vector<int> dy={0,1,0,-1};

int main(){
  int D;
  cin>>D;
  vector<int> c(26);
  vector<vector<int>> s(D,vector<int>(26,0));
  vector<int> t(D);
  rep(i,26)
    cin>>c.at(i);
  rep(i,D){
    rep(j,26)
      cin>>s.at(i).at(j);
  }
  rep(i,D){
    cin>>t.at(i);
    t.at(i)--;
  }
  
  vector<in> v(D,0);
  vector<int> last(26,0);
  
  in sum=0;
  for(int i=0;i<D;i++){
    last.at(t.at(i))=i+1;
    sum+=s.at(i).at(t.at(i));
    rep(j,26)
      sum-=c.at(j)*(i+1-last.at(j));
    
    v.at(i)=sum;
  }
  rep(i,D)
    cout<<v.at(i)<<endl;
  
  /*vector<in> v_ans(D);
  rep(i,D){
    cin>>v_ans.at(i);
    cout<<v_ans.at(i)-v.at(i)<<endl;
  }*/
}