#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(void){
    // Here your code !
    int n;
    string m;
    while(1) {
        n = 0;
        cin >> m;
        if(m == "0")
            break;
        
        for(int i=0;i<m.size();i++) {
            int k = m[i] - '0';
            n = n + k;
        }
        cout << n << endl;
    }
    
}