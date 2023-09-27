#include<iostream>                                              
#include<string>                                                
#define N 100000                                                
using namespace std;                                            
                                                                
int main() {                                                    
  while(true){                                                  
    int m, n;                                                   
    char x[N], y[N], xy[N];                                     
    cin >> n;                                                   
    if (n==0) {                                                 
      break;                                                    
    }                                                           
    for (int j=0; j<n; j++) {                                   
      cin >> x[j] >> y[j];                                      
    }                                                           
    cin >> m;                                                   
    for (int i=0; i<m; i++) {                                   
      cin>>xy[i];                                               
      for (int j=0;j<n;j++) {                                   
        if (xy[i]==x[j]) {                                      
          xy[i] = y[j];                                         
          break;                                                
        }                                                       
      }                                                         
    }                                                           
    for (int i=0; i<m; i++) {                                   
      cout << xy[i] << flush;                                   
    }                                                           
    cout<<endl;                                                 
  }                                                             
  return 0;                                                     
}                                                               
                               