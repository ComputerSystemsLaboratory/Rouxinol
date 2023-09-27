#include<iostream>                                        
#include<cstring>                                         
using namespace std;                                      
                                                          
int main(){                                               
  char str_s1[101],str_s2[101],str_p[101];                
  cin >> str_s1;                                          
  cin >> str_p;                                           
                                                          
  strcpy(str_s2,str_s1);                                  
  strcat(str_s1,str_s2);                                  
                                                          
  if(strstr(str_s1,str_p) != NULL)                        
    cout << "Yes";                                        
  else                                                    
    cout << "No";                                         
                                                          
  cout << endl;                                           
                                                          
  return 0;                                               
}                                                         
  