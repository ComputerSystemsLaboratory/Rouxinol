#include<iostream>                                        
#include<string>                                          
using namespace std;                                      
                                                          
int main(){                                               
  string str;                                             
  string sub1,sub2;                                       
  int m;                                                  
  int h;                                                  
                                                          
  while(1){                                               
    cin >> str;                                           
    if(str[0] == '-') break;                              
    cin >> m;                                             
    for(int i=0;i<m;i++){                                 
      cin >> h;                                           
      sub1 = str.substr(0,h);                             
      sub2 = str.substr(h,(str.size()-h));                
      str = sub2 + sub1;                                  
    }                                                     
    cout << str << endl;                                  
  }                                                       
                                                          
  return 0;                                               
}