#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x, y;
    
    while(true){
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        
        if(x > y) swap(x, y);
        printf("%d %d\n", x, y);        
    }
    
    return 0;
}