#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
  vector<string> mem;
  string s;
  int n;
  bool flag=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    mem.push_back(s);
  }
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<mem.size();j++){
      if(mem[j]==s){
	if(flag==0){
	  cout<<"Opened by "<<s<<endl;
	  flag=1;
	}else{
	  cout<<"Closed by "<<s<<endl;
	  flag=0;
	}
	//cout<<"flag is "<<flag<<endl;
	break;
      }
      if(j==mem.size()-1)cout<<"Unknown "<<s<<endl;
    }
  }
  return 0;
}