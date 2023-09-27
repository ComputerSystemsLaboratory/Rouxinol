#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){
  vector<string> s;
  vector<int> cnt;
  string ss,str;
  getline(cin,str);
  string longest="";
  string max;
  int maxv=-1;
  str+=" ";
  for(int i = 0; i < str.size() ; i ++  ){
    if(str[i] == ' '){
      bool used=true;
      
      for(int j = 0 ; j < s.size() ; j ++){
	//second time
	if(s[j] == ss){
	  cnt[j]++;
	  //cout<<ss<<cnt[j]<<maxv<<endl;
	   
	  if(maxv<cnt[j]){
	    longest=ss;
	    maxv=cnt[j];
	  }
	  
	  ss="";
	  used=false;
	}
      }
      if(used){
	//first time
	s.push_back(ss);
	cnt.push_back(1);
	//cout<<ss<<cnt[cnt.size()-1]<<endl;
	/*
	if(s.size() == 1){
	  longest=ss;
	  max=ss;
	  maxv=ss.size();
	}
	//*/
	if(ss.size()>max.size())max=ss;
	ss="";
      }
      
    }else{
      ss+=str[i];
    }
    // cout<<str[i]<<endl;
  }
  cout<<longest<<" ";
  cout<<max<<endl;
  /*
  for(int i = 0 ; i < s.size() ; i ++){
    cout<<s[i]<<endl;;
  }
  cout<<endl;
  //*/
}