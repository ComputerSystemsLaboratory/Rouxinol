#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  string s;
  int stk[100];
  int indx=0;
  int i=0;

  getline(cin,s);

  while(i < (int)s.size()){

    if(s[i] == ' '){
    }
    else if(s[i]=='+'){
      stk[indx-2]+=stk[indx-1];
      indx--;
    }
    else if(s[i]=='-'){
      stk[indx-2]-=stk[indx-1];
      indx--;
    }
    else if(s[i]=='*'){
      stk[indx-2]*=stk[indx-1];
      indx--;
    }
    else{
      stk[indx]=0;
      while(s[i]!=' '){
	stk[indx]*=10;
	stk[indx]+=s[i]-'0';
	i++;
      }
      i--;
      indx++;
    }

    i++;

  }
  
  cout << stk[0] << endl;

  return 0;
}