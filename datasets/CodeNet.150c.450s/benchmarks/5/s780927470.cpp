#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    if(n < 0 || n > 100) return -1;
    int a[n];
    for(int i =0 ;i < n ; i++){
        cin >> a[i];
    }

//    output
    for(int i = 0; i < n-1 ; i ++){
        cout << a[n-i-1] << " ";
    }
    cout << a[0];
    cout << endl;

    return 0;
}
