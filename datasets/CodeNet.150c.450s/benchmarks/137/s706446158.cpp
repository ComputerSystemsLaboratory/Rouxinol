#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
  string str;
  string command;
  set<string>st;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>command;
    cin>>str;
    if(command=="insert"){
      st.insert(str);
    }else if(command=="find"){
      if(st.find(str)==st.end()){
	cout<<"no"<<endl;
      }else{
	cout<<"yes"<<endl;
      }
    }
  }
  return(0);
}