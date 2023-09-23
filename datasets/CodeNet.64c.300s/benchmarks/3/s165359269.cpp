#include <iostream>
#include <math.h>
#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971
using namespace std;

int main(){
    int n,*num;
    cin >> n;
    num = new int[n];
    
    for(int ii=n-1;ii >= 0;ii--){
        cin >> num[ii];
    }
    
    for(int ii=0;ii<n;ii++){
        cout << num[ii];
        if(ii < n - 1){
            cout << " ";
        }
    }
    
    cout << endl;
    return 0;
}
               