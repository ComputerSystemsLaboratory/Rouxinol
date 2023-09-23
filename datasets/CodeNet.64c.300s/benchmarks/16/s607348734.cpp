#include<iostream>
using namespace std;

int main(){
   int n, R[200000];
    cin >> n;
    for ( int i = 0; i < n; i++ ){
       cin >> R[i];
    }
    
    int ans = R[1] - R[0];
    int min =R[0];
    
    for ( int i = 1; i < n; i++ ){
        
       if ( R[i] - min > ans ) ans = R[i] - min;
       if ( R[i] < min ) min = R[i]; 
    } 
  
        cout << ans << endl;
    
    
    
}
    