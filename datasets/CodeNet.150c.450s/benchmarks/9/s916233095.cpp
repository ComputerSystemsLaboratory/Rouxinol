#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <string.h>

using namespace std;

int main(){
   
 while(1){ 
   
    string s; cin>>s; 
    
    if(s[0]=='-') break;
    
    int m; cin>>m;
    
    for(int i=0; i<m; i++){
      
      int h; cin>>h; string w;
      
      for(int j=0; j<h; j++){
        w+=s[j];
        }
        
      s+=w;
        
      s.erase(0,h);
      
      }
      
      cout<<s<<endl;
    
  }

}