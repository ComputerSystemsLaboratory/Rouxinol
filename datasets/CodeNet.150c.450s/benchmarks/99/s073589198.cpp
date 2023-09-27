//12
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    string s[2];
    int sum=0;
    for(int i=0;i<2;i++){
      cin>>s[i];
      int f=1;
      for(int j=0;j<s[i].size();j++){
	if(isdigit(s[i][j])){
	  f=s[i][j]-'0';
	}else{
	  int t[128];
	  t['m']=1000;
	  t['c']=100;
	  t['x']=10;
	  t['i']=1;
	  sum+=f*t[s[i][j]];
	  f=1;
	}
      }
    }
    for(int i=0;i<4;i++){
      int d[]={1000,100,10,1};
      const char *s="mcxi";
      if(sum/d[i]){
	if(sum/d[i]>1){
	  cout<<sum/d[i];
	}
	cout<<s[i];
      }
      sum%=d[i];
    }
    cout<<endl;
  }
  return 0;
}