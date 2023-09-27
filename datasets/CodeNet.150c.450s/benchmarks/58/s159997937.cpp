#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <cstdlib>
#include <stack>
#include <stdio.h>
#include <vector>
#include <sstream>

using namespace std;
typedef long long int ll;

vector<string> split(const string &s){

  vector<string> elms;
  stringstream ss(s);
  string item;
  while(getline(ss, item,' ')){
    if(!item.empty()){
      elms.push_back(item);
    }
  }
  return elms; 
}


int main(){

  string line;
  //fill(line,line+1000,'\0');
  
  stack<ll> st;
  getline(cin,line);
  vector<string> elms = split(line);
  
  int i=0;
  //cout<<line<<endl<<line.size()<<endl;
  while(i<elms.size()){
    
    //if(cin.eof()) break;
    //if(elm=='\n') break;
    if(elms[i]=="+" || elms[i]=="-" || elms[i]=="*"){
      ll x = st.top();
      st.pop();
      ll y = st.top();
      st.pop();
      ll z = 0;
      if(elms[i]=="+") z = y+x;
      if(elms[i]=="-") z = y-x;
      if(elms[i]=="*") z = y*x;
      st.push(z);
    }
    else{
      stringstream ss;
      int ret;
      ss<<elms[i];
      ss>>ret;
      //cout<<ret<<endl;
      st.push(ret);
    }
    i++;
  }
  cout<<st.top()<<endl;
 
  return 0;
}