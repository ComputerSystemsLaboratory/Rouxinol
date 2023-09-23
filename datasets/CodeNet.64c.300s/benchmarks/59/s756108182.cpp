#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //input
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    /*
    for(int i=0; i<n; i++){
        cout << "a[" << i << "] is " << a[i] << endl;
    }
    */
    
    //calculation
    int k=n; 
    for(int i=0; i<n; i++){
        //cout << "loop " << i << endl;
        double u = sqrt(a[i]);
        //cout << u << " for " << a[i] << endl;
        for(int j=2; j<= u; j++){
            if (j==a[i]){
                break;
            }
            if( a[i]%j==0){
                //cout << a[i] << " can be divided by " << j << endl;
                k--;
                break;
            }
        }
    }
    
    //output
    cout << k << endl;
}