#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  int n;
  int m;
  cin>>n;
  vector<string> users(n);
  bool flag=false;
  for(int i=0;i<n;i++)
    cin>>users[i];

  cin>>m;
  for(int i=0;i<m;i++){
    string str;
    cin>>str;
    vector<string>::iterator it;
    if((it=find(users.begin(),users.end(),str))!=users.end()){
      if(flag){
	cout<<"Closed by "<<*it<<endl;
	flag=false;
      }else{
	cout<<"Opened by "<<*it<<endl;
	flag=true;
      }
    }else{
      cout<<"Unknown "<<str<<endl;
    }
  }

  return 0;
}