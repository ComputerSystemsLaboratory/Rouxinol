#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <iostream> 
#include <algorithm>
#include <math.h>
#include <map> 
#include <string.h> 
#include <string> 
#include <cctype> 

using namespace std;

string s,p; char t[201]; bool flag;

int main(){	
  
  cin>>s>>p; 
  
  for(int i=0; i<s.size(); i++){
    t[i]=s[i];
    }
  for(int i=0; i<s.size(); i++){
    t[i+s.size()]=s[i];
    }
  
 for(int j=0; j<s.size(); j++){
   string x;
  for(int i=j; i<j+p.size(); i++){
    x+=t[i];
    }
    if(p==x) {flag=true; break;}
  }
    
  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

}