#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(void){
    while(1){
        string x;
        cin >> x;
        
        if(x=="0")break;
        
        int v;
        v=0;
        for(int i=0;i<(int)x.size();i++){
            char ch = x[i];
            
            int n = (int)ch - (int)'0';
            v+=n;
        }
        cout << v << endl;;
    }
}