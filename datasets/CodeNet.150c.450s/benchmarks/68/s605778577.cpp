#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    
    int n,gap,what;
    int a[1001];
    
    while (1){
        cin >> n ;
        if(n == 0 ) break;
        
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        gap = abs(a[0]-a[1]);
        
        for(int i = 0; i<n;i++){
            for(int j = i+1;j<n;j++){
                what = abs(a[i]-a[j]);
                if(gap>= what) gap = what;
            }
        }
        cout << gap << endl;
    }
    
    return 0;
}

