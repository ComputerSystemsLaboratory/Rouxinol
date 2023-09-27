#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
string str;
set<string> S;

int main(){
  int Tc;
  cin>>Tc;
  while(Tc>0){
    Tc--;
    S.clear();
    cin>>str;
    for(int i=1;i<(int)str.size();i++){
      string a=str.substr(0,i);
      string b=str.substr(i);
      string c=a;
      string d=b;
      reverse(c.begin(),c.end());
      reverse(d.begin(),d.end());
      string t[4]={a,c,b,d};
      
      for(int j=0;j<2;j++){
        for(int k=2;k<4;k++){
          S.insert(t[j]+t[k]);
          S.insert(t[k]+t[j]);
        }
      }
    }
    cout<<S.size()<<endl;
  }
  return 0;
}