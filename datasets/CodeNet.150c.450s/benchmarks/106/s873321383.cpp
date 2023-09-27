#include <iostream>
using namespace std;

int main(){
    
    int a, b, c;
    int ans = 0;
    int div;
    
    cin >> a >> b >> c;
    
    div = a;
    
    while( div <= b ){
        
        if( c % div == 0)
            ans++;
            
        div++;
        
    }
    
    cout << ans << endl;
    
    return 0;
    
}
