#include<cstdio>
#include<queue>
#include<stack>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
typedef pair<int,int> P;

char s[20003];
stack<int> sta;
vector<P > ku;

int main(){

  scanf("%s",s);
  int res=0;
  for(int i=0;i<sizeof(s);i++){
    if(s[i]=='\\'){
      sta.push(i);
    }
    if(s[i]=='/' && !sta.empty()){
      int mama=sta.top();sta.pop();
      res+=i-mama;
      ku.push_back(P(mama,i));

    }
  }

  vector<int> ma;

  for(vector< P >::iterator it=ku.begin();it!=ku.end();it++){
    int ress=it->second-it->first;
    bool flg=true;
    for(vector< P >::iterator gt=ku.begin();gt!=ku.end();gt++){
      if(it->first<gt->first && it->second>gt->second){
        ress+=gt->second-gt->first;
      }
      if(it->first>gt->first && it->second<gt->second) flg=false;
    }
    if(flg) ma.push_back(ress);
  }


  printf("%d\n",res);
  printf("%d",ma.size());
  for(vector<int>::iterator it=ma.begin();it!=ma.end();it++)
    printf(" %d",*it);
  printf("\n");

  return 0;
}