#include<iostream>
#include<map>
using namespace std;

int main(void){
  map<string,int>m;
  map<string,int>::iterator it,cit,sit;
  string s;
  int maxS=0,maxC=0;
  while(cin >>s){
    m[s]+=1;
  }
  for(it=m.begin();it!=m.end();it++){
    int size=(*it).first.size();
    if(size>maxS){
      sit=it;
      maxS=size;
    }
    int cou=(*it).second;
    if(cou>maxC){
      cit=it;
      maxC=cou;
    }
  }

  /*
 for(it=m.begin();it!=m.end();it++){
   cout <<(*it).first.size() <<" "<<(*it).second<<endl;
  }
  */
  cout <<(*cit).first <<" "<<(*sit).first<<endl;
}