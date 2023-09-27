#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  int m;
    cin>>m;
  string meirei,moji;
  map<string,int> dic;
  while(m--){
    cin>>meirei>>moji;
    if(meirei=="insert"){
      dic.insert(make_pair(moji,1));
    }else{
      if(dic.find(moji)!=dic.end()){
        cout<<"yes"<<endl;
      }else{
        cout<<"no"<<endl;
      }
    }
  }


}