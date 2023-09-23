                  
#include<iostream>                                        
using namespace  std;                                     
                                                          
int main(){                                               
  int m,f,r;                                              
  char grade;                                             
  while(1){                                               
    cin >> m >> f >> r;                                   
    if(m == -1 && f == -1 && r == -1) break;              
    int sum = m + f;                                      
    if(m == -1 || f == -1)                                
      grade = 'F';                                        
    else if(sum >= 80)                                    
      grade = 'A';                                        
    else if(sum >= 65 && sum < 80)                        
      grade = 'B';                                        
    else if(sum >= 50 && sum < 65)                        
      grade = 'C';                                        
    else if(sum >= 30 && sum < 50){                       
      if(r >= 50)                                         
        grade = 'C';                                      
      else                                                
        grade = 'D';                                      
    }                                                     
    else if(sum <= 30)                                    
      grade = 'F';                                        
    cout << grade << endl;                                
  }                                                       
                                                          
  return 0;                                               
}