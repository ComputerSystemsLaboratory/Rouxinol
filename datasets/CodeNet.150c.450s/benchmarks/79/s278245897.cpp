#include <bits/stdc++.h>                                             
                                                                     
using namespace std;                                                 
                                                                     
int main() {                                                         
                                                                     
    int n, r, p, c;                                                  
                                                                     
    while(cin >> n >> r, n | r) {                                    
                                                                     
        int fuda[n];                                                 
                                                                     
        for(int i = 0; i < n; ++i) {                                 
            fuda[i] = n - i;                                         
        }                                                            
                                                                     
        for(int i = 0; i < r; ++i) {                                 
                                                                     
            cin >> p >> c;                                           
                                                                     
            int temp[p + c - 1];                                     
                                                                     
            for(int j = 0; j < p - 1; ++j) {                         
                temp[c + j] = fuda[j];                               
            }                                                        
                                                                     
            for(int j = 0; j < c; ++j) {                             
                temp[j] = fuda[p + j - 1];                           
            }                                                        
                                                                     
            for(int j = 0; j < p + c - 1; ++j) {                     
                fuda[j] = temp[j];                                   
            }                                                        
                                                                     
        }                                                            
                                                                     
        cout << fuda[0] << endl;                                     
                                                                     
    }                                                                
                                                                     
}                                                                    
                                                                     