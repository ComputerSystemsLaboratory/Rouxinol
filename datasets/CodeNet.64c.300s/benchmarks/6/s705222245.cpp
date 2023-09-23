#include<iostream>                                        
using namespace  std;                                     
                                                          
int main(){                                               
  int n;                                                  
  int b,f,r,v;                                            
  int i;                                                  
  int house[4][3][10] = {};                               
                                                          
  cin >> n;                                               
                                                          
  for(i=0;i<n;i++){                                       
    cin >> b >> f >> r >> v;                              
    house[b-1][f-1][r-1] += v;                            
  }                                                       
                                                          
  for(int k=0;k<4;k++){                                   
    for(n=0;n<20;n++){                                    
      if(k>0)                                             
      cout << "#";                                        
    }                                                     
    if(k>0)                                               
    cout << endl;                                         
    for(int l=0;l<3;l++){                                 
      for(int m=0;m<10;m++){                              
        cout << " " << house[k][l][m];                    
      }                                                   
      cout << endl;                                       
    }                                                     
  }                                                       
                                                          
  return 0;                                               
                                                          
} 