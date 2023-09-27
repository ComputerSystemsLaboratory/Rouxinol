#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(void){
  string s;
  getline(cin,s);
  string n;
  string maxs;
  string longs ="";
  int maxv;
  vector<string> ss;
  vector<int> ii;
  s += " ";
  for(int i = 0 ; i < s.size() ; i ++){
    if(s[i] == ' '){
      if(!ss.size()){
	maxv = 0;
	maxs = n;
      }
      if(longs.size() < n.size()){
	longs = n;
	//cout<<n<<endl;
      }
      bool used = false;
      for(int i = 0 ; i < ss.size() ; i ++){
	if(n == ss[i]){
	  ii[i] ++;
	  if(maxv < ii[i]){
	    maxv = ii[i];
	    maxs = n;
	  }
	  used = true;
	  break;
	}
      }
      if(!used){
	ii.push_back(1);
	ss.push_back(n);
      }
      n = "";
    }else{
      n += s[i];
    }
  }
  cout<<maxs<<" "<<longs<<endl;
}