#include<iostream>                                        
#include<string>                                          
#include<cmath>                                           
using namespace std;                                      
                                                          
class Dice{                                               
public:                                                   
  int a,b,c,d,e,f;                                        
  string comand;                                          
  int tmp1,tmp2,tmp3;                                     
  int q1,q2;                                              
                                                          
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
  void qtoa(){                                            
    cin >> q1 >> q2;                                      
    if(q1==b&&q2==c||q1==c&&q2==e||q1==d&&q2==b||q1==e&&q\
2==d) cout << a << endl;                                  
    else if(q1==a&&q2==d||q1==c&&q2==a||q1==d&&q2==f||q1=\
=f&&q2==c) cout << b << endl;                             
    else if(q1==a&&q2==b||q1==b&&q2==f||q1==e&&q2==a||q1=\
=f&&q2==e) cout << c << endl;                             
    else if(q1==a&&q2==e||q1==b&&q2==a||q1==e&&q2==f||q1=\
=f&&q2==b) cout << d << endl;                             
    else if(q1==1&&q2==c||q1==c&&q2==f||q1==d&&q2==a||q1=\
=f&&q2==d) cout << e << endl;                             
    else   cout << f << endl;                             
  }                                                       
                                                          
                                                          
  void print(){                                           
    cout << a << endl;                                    
  }                                                       
};                                                        
int main(){                                               
  int num;                                                
  Dice d1;                                                
                                                          
  d1.scan();                                              
  cin >> num;                                             
  for(int i=0;i<num;i++) d1.qtoa();                       
                                                          
  return 0;                                               
}