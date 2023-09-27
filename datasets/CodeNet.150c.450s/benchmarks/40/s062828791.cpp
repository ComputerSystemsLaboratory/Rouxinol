#include<iostream>                                                                                                                                    
#include<string>                                                                                                                                      
#include<cmath>                                                                                                                                       
using namespace std;                                                                                                                                  
                                                                                                                                                      
class Dice{                                                                                                                                           
public:                                                                                                                                               
  int a,b,c,d,e,f;                                                                                                                                    
  string comand;                                                                                                                                      
  int tmp1,tmp2,tmp3;                                                                                                                                 
                                                                                                                                                      
  Dice(){                                                                                                                                             
    a = 0;                                                                                                                                            
    b = 0;                                                                                                                                            
    c = 0;                                                                                                                                            
    d = 0;                                                                                                                                            
    e = 0;                                                                                                                                            
    f = 0;                                                                                                                                            
  }                                                                                                                                                   
                                                                                                                                                      
  void scan(){                                                                                                                                        
    cin >> a >> b >> c >> d >> e >> f;                                                                                                                
  }                                                                                                                                                   
                                                                                                                                                      
  void move(){                                                                                                                                        
    cin >> comand;                                                                                                                                    
    for(int i=0;i<comand.size();i++){                                                                                                                 
      if(comand[i] == 'N'){                                                                                                                           
        tmp1 = a;                                                                                                                                     
        a = b;                                                                                                                                        
        tmp2 = e;                                                                                                                                     
        e = tmp1;                                                                                                                                     
        tmp3 = f;                                                                                                                                     
        f = tmp2;                                                                                                                                     
        b = tmp3;                                                                                                                                     
      }                                                                                                                                               
     else if(comand[i] == 'E'){                                                                                                                      
        tmp1 = a;                                                                                                                                     
        a = d;                                                                                                                                        
        tmp2 = c;                                                                                                                                     
        c = tmp1;                                                                                                                                     
        tmp3 = f;                                                                                                                                     
        f = tmp2;                                                                                                                                     
        d = tmp3;                                                                                                                                     
      }                                                                                                                                               
      else if(comand[i] == 'W'){                                                                                                                      
        tmp1 = a;                                                                                                                                     
        a = c;                                                                                                                                        
        tmp2 = d;                                                                                                                                     
        d = tmp1;                                                                                                                                     
        tmp3 = f;                                                                                                                                     
        f = tmp2;                                                                                                                                     
        c = tmp3;                                                                                                                                     
      }                                                                                                                                               
      else if(comand[i] == 'S'){                                                                                                                      
        tmp1 = a;                                                                                                                                     
        a = e;                                                                                                                                        
        tmp2 = b;                                                                                                                                     
        b = tmp1;                                                                                                                                     
        tmp3 = f;                                                                                                                                     
        f = tmp2;                                                                                                                                     
        e = tmp3;                                                                                                                                     
      }
        else break;
    }
  }      
                                                                                                                                         
  void print(){                                                                                                                                       
    cout << a << endl;                                                                                                                                
  }                                                                                                                                                   
};                                                                                                                                                    
                                                                                                                                                      
int main(){                                                                                                                                           
  Dice d1;                                                                                                                                            
                                                                                                                                                      
  d1.scan();                                                                                                                                          
  d1.move();                                                                                                                                          
  d1.print();                                                                                                                                         
                                                                                                                                                      
  return 0;                                                                                                                                           
}