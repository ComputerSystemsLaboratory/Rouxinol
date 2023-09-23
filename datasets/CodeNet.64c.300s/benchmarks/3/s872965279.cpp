#include <iostream>
using namespace std;
int main(void){
    
    int i,n;
    int x[101];
    
    cin >> n;
    
    for(i=0; i<n; i++){
        cin >> x[i];
    }
    
    for(i=n-1; i>=0; i--){
        if (i==0){
            cout << x[i] << endl;
        }
        else{
            cout << x[i] << " ";
        }
    }
    
    return 0;
}

