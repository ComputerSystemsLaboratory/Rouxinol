//Numeral System
#include<bits/stdc++.h>
using namespace std;

int mcxitoi(string s){
  int c=1, ret=0;;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='m'){ret+=c*1000; c=1;}
    else if(s[i]=='c'){ret+=c*100; c=1;}
    else if(s[i]=='x'){ret+=c*10; c=1;}
    else if(s[i]=='i'){ret+=c; c=1;}
    else{c=s[i]-'0';}
  }
  return ret;
}

string itomcxi(int t){
  char c[4]={'i', 'x', 'c', 'm'};
  string ret="";
  int cnt=0;
  while(t!=0){
    if(t%10!=0){
      ret=c[cnt]+ret;
      if(t%10!=1)
        ret=(char)(t%10+'0')+ret;
    }
    t/=10;
    cnt++;
  }
  return ret;
}

int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    string s1, s2;
    cin>>s1>>s2;
    cout<<itomcxi(mcxitoi(s1)+mcxitoi(s2))<<endl;
  }
  return 0;
}