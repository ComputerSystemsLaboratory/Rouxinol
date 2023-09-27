#include<iostream>
#include<vector>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int main(void){
  string s,p;
  int n;
  while(cin>>n,n){
    int ret = 0;
    cin>>p;
    rep(i,n-1){
      cin>>s;
      if(s[0] != p[0] && s[1] == p[1])ret++;
      p=s;
    }
    cout<<ret<<endl;
  }

}