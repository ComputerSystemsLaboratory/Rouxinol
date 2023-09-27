#include<bits/stdc++.h>
using namespace std;

map<string,int> mp; 
int main(){
  int maxcnt=0;
  string str,maxs="";
    //入力
  while(cin>>str){
    //文字数が一番多い文字判定
    if(maxs.size()<=str.size())maxs=str;
    //大文字を小文字に変換
    for(int i=0;i<str.size();i++){
      if(str[i]>='A' && str[i]<='Z'){
	str[i]+='a'-'A';
      }
    }
    mp[str]++;
    //頻繁判定
    if(maxcnt<mp[str])maxcnt=mp[str];
  }
    //出力
  for(map<string,int>::iterator it=mp.begin() ;it!=mp.end();++it){
    if((*it).second==maxcnt){
      cout<<(*it).first<<" "<<maxs<<endl;
      break;
    }
  }
  return 0;
}
  
  