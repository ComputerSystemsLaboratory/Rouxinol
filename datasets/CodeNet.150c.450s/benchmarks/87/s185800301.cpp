#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    vector<string>s(5);
    rep(i,n){
      string a,b,c,d,e;
      cin>>a>>b>>c>>d>>e;
      s[0]=a+s[0];
      s[1]=b+s[1];
      s[2]=c+s[2];
      s[3]=d+s[3];
      s[4]=e+s[4];
    }
    rep(i,5)while(s[i].size()<11)s[i].push_back('%');
    //
    int ans=0;
    while(1){
      bool han=true;
      rep(i,11){
	int j;
	for(j=1;j<4;j++){
	  if(s[j-1][i]==s[j][i]&&s[j][i]==s[j+1][i]&&s[j][i]!='%')break;
	}
	if(j!=4){
	  han=false;
	  char tmp=s[2][i];
	  rep(j,5){
	    if(tmp==s[j][i]){
	      ans+=s[j][i]-'0';s[j][i]='!';
	    }
	  }
	  if(s[0][i]==s[2][i]&&s[0][i]!=s[1][i]){ans-=tmp-'0';s[0][i]=tmp;}
	  else if(s[2][i]==s[4][i]&&s[3][i]!=s[4][i]){ans-=tmp-'0';s[4][i]=tmp;}
	}
      }
      rep(i,5){
	for(int j=10;j>=0;j--){
	  if(s[i][j]=='!'){s[i].erase(s[i].begin()+j);s[i].push_back('%');}
	}
      }
      if(han)break;
      //rep(i,5)cout<<s[i]<<endl;
    }
    cout<<ans<<endl;
  }
}