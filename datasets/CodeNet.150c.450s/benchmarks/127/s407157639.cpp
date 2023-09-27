#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
string str;
map<string,bool> used;
int main(){
  int Tc;
  cin>>Tc;
  while(Tc--){
    used.clear();
    cin>>str;
    int ans=0;
    for(int i=1;i<(int)str.size();i++){
      string a=str.substr(0,i);
      string b=str.substr(i);
      string c=a;
      string d=b;
      reverse(c.begin(),c.end());
      reverse(d.begin(),d.end());
      string t[]={a,c,b,d};
      for(int j=0;j<2;j++){
	for(int k=2;k<4;k++){
	  string e=t[j]+t[k];
	  string f=t[k]+t[j];
	  if(!used[e])ans++;
	  used[e]=true;
	  if(!used[f])ans++;
	  used[f]=true;
	}
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}