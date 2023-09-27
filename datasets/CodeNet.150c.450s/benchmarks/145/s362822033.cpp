#include<iostream>
#include<vector>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int main(void){
  string s,len="";
  getline(cin,s);
  
  s += ' ';
  vector<string> arys;
  string ss="";
  rep(i,s.size()){
    if(s[i] != ' '){
      ss += s[i];
    }else{
      arys.push_back(ss);
      if(len.size() < ss.size())len=ss;
      ss = "";
    }
  }
  vector<int> aryi(arys.size(),0);
  int n = arys.size(),used=0,index=-1;
  rep(i,n){
    loop(j,i,n){
      if(arys[i] == arys[j]){
        aryi[i]++;
        if(aryi[i] > used){
          index = i;
          used = aryi[i];
        }
      }
    }
  }
  
  cout<<arys[index]<<" "<<len<<endl;

}