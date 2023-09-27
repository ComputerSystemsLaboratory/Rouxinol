#include <bits/stdc++.h>
using namespace std;
long long s[365][26]; 
int main() {
  int d;
  cin >>d;
  //int d=365;
  vector<int>c(26);
  vector<int>last(26,0);
  //vector<int>hinichi(26,0);
  long long wa=0;
  for(int i=0;i<26;i++){
    cin>>c[i];
    wa+=c[i];
  }
  for(int i=0;i<d;i++){
    for(int j=0;j<26;j++){
      cin>>s[i][j];
    }
  }
  vector<int>t(d);
  for(int i=0;i<d;i++)cin>>t[i];
  long long kotae=0;
  int hinichi=0;
  long long hikukazu=0;
  for(int i=0;i<d;i++){
    long long atai=0;
    /*for(int j=0;j<26;j++){
      if(atai<s[i][j]){
        atai=s[i][j];
        hinichi=j;
      }
    }
    hikukazu+=wa-c[hinichi]*(i+1-last[hinichi]);
    last[hinichi]=i+1;*/
    atai=s[i][t[i]-1];
    hikukazu+=wa-c[t[i]-1]*(i+1-last[t[i]-1]);
    last[t[i]-1]=i+1;
    kotae+=atai-hikukazu;
    //cout<<wa<<" "<<c[hinichi]<<" "<<hikukazu<<" "<<s[i][hinichi]<<endl;
    //cout<<wa<<" "<<c[t[i]-1]<<" "<<hikukazu<<" "<<s[i][t[i]-1]<<endl;
    cout<<kotae<<endl;
  }
  return 0;
}
  
