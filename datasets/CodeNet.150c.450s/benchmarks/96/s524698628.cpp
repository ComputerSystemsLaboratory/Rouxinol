#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
  string s;
  int N;
  char bot[10][20]={"0",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 

  int count=0,flag=0;
  while(cin>>N){
    for(int i=0;i<N;i++){
      count=0;
      s.clear();
      cin>>s;
      for(int j=0;j<(int)s.size();j++){
	if(s[j]!='0'&&flag==0){
	  flag=s[j]-'0';
	}else if(flag!=0&&s[j]!='0'){
	  count++;
	}else if(s[j]=='0'&&flag!=0){
	  if(count<0&&count<=strlen(bot[flag]))cout<<bot[flag][count];
	  else{
	    while(count>strlen(bot[flag])-1){
	      count=count-strlen(bot[flag]);
	    }

	    cout<<bot[flag][count];
	  }
	  count=0;
	  flag=0;
	}
      }
      cout<<endl;
    }
  }
  return 0;
}