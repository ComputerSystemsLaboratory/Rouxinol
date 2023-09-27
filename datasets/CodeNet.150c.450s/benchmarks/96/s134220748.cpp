#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

string s;

vector<vector<char> > b{
  vector<char>{},
  vector<char>{'.',',','!','?',' '},
  vector<char>{'a','b','c'},
  vector<char>{'d','e','f'},
  vector<char>{'g','h','i'},
  vector<char>{'j','k','l'},
  vector<char>{'m','n','o'},
  vector<char>{'p','q','r','s'},
  vector<char>{'t','u','v'},
  vector<char>{'w','x','y','z'},
};
int main(){ _;
  int n;cin>>n;
  REP(i,n){
    cin>>s;
    int last=0;
    int count=0;
    for(int j=0;j<(int)s.size();j++){
      if(last==0){
	count=0;
      }else if(s[j]=='0'){
	cout<<b[last][count%(int)b[last].size()];
      }else{
	count++;
      }
      last=(s[j]-'0');
    }
    cout<<endl;
  }
}