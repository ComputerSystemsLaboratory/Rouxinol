#include<bits/stdc++.h>
using namespace std;


typedef pair<string,int> p;
vector <p> ls(0);


int find(string s){
  for(int i=0; i<(int)ls.size(); i++){
    if(s==ls[i].first){
      return i;
    }
  }
  return -1;
}

int main(){

  string in;
  int max=0,indx=0;
  string maxs="";

  while(cin>>in){
    int tmp=find(in);
    if(tmp==-1){
      ls.push_back(p(in,1));
      if(in.size()>maxs.size()){ maxs = in;}
    }
    else{
      ls[tmp].second++;
      if(ls[tmp].second>max){
        max=ls[tmp].second;
        indx = tmp;
      }
    }

/*
    for(int i=0; i<(int)ls.size(); i++)
      cout << ls[i].first << " ";
      cout << endl;
    for(int i=0; i<(int)ls.size(); i++)
      cout << ls[i].second << " ";
      cout << endl;
*/
  }

  cout << ls[indx].first << " " << maxs << endl;

  return 0;
}