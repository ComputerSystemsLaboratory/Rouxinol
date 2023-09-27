#include<iostream>
#include<map>
using namespace std;
int N,M;
bool flg;
map<string,bool> used;
int main(){
  cin>>N;
  for(int i=0;i<N;i++){
    string str;
    cin>>str;
    used[str]=true;
  }
  cin>>M;
  for(int i=0;i<M;i++){
    string str;
    cin>>str;
    if(used[str]){
      flg^=true;
      if(flg)cout<<"Opened by ";
      else cout<<"Closed by ";
    }else{
      cout<<"Unknown ";
    }
    cout<<str<<endl;
  }
  return 0;
}