#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  vector<string> str;
  string s;
  int cnt=0;
  int pointer[1000]={};
  pair<int,string> pis;
  pis=make_pair(0,"");
  while(cin>>s){
    int flag=1;
    for(int i=0;i<str.size();i++){
      if(str[i]==s){
	pointer[i]++;
	flag=0;
	break;
      }
    }if(flag){
      str.push_back(s);
      pointer[str.size()-1]++;
      if(pis.first<s.size()){
	pis.first=s.size();
	pis.second=s;
      }
    }
  }
  pair<int,int> poin;
  poin=make_pair(0,0);
  for(int i=0;i<str.size();i++){
    if(poin.first<pointer[i]){
      poin.first=pointer[i];
      poin.second=i;
    }
  }
  cout<<str[poin.second]<<" "<<pis.second<<endl;
  return 0;
}