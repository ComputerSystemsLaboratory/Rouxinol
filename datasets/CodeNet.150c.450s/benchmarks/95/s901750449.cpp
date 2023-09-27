#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
Def inf = sizeof(Def) == sizeof(long long) ? 2e18 : 1e9+10;

int main(){
  int n;
  while(cin>>n,n){
    int co=0,out=0,h=0;
    rep(i,n){
      string s;
      cin>>s;
      if(s[1]=='u')co++;
      else co--;
      if(co==2&&h==0){
	h=1;out++;
      }else if(co==0&&h==1){
	h=0;out++;
      }
    }
    cout<<out<<endl;
  }
}

