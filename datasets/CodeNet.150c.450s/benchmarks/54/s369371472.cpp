#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>

int main(){
    
    string W, T;
    int n = 0;
    cin >> W;
    while(1){
        cin >> T;
        if ( T == "END_OF_TEXT" ) break;
        for ( int i = 0; i < T.size(); i++){
           if ( 65 <= T[i] && T[i] <= 90 ) T[i] += 32;
        }
        if ( T == W ) n++;
    }
    printf("%d\n", n);
    
    return 0;
}
