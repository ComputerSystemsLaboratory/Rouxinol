#include <iostream>
using namespace std;
int main(void){
    int i,m,nmin,nmax,a[200],gap,n;
    
    while(1){
        
        cin >> m >> nmin >> nmax;
        if(m==0 && nmin == 0 && nmax == 0) break;
        
        for(i=1;i<m+1;i++){
            cin >> a[i];
        }
        
        gap = a[nmin] - a[nmin+1];
        n = nmin;
        
        for(i=nmin;i< nmax+1;i++){
            if(a[i] - a[i+1] >= gap ){
                gap = a[i]-a[i+1];
                n = i;
               
            }
             //cout << gap << " " << n << endl;
             
        }
        
        cout << n << endl;
        
    }
    
    return 0;
}

