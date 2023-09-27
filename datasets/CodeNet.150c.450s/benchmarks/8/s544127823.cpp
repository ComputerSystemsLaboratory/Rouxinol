#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    string a,b;
    int n;
    int i;
    int t,h;
    
    t=0;
    h=0;
    cin >> n;
    for ( i = 0; i < n; i++){
        cin >> a >> b;         
        if (a > b){
            t=t+3;
        }else if(a < b){
            h=h+3;
        }else{
            t=t+1;
            h=h+1;
        }
    }
    
    cout << t << " " << h << endl;
    
    return 0;
}