#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int i, n;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        
    }
    for(i=0;i<n;i++){
        if (i) printf(" ");
        cout <<  a[n-i-1];
    }
    
    cout << endl;
    
    return 0;
}