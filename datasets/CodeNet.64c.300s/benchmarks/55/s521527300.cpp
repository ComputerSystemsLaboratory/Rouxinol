#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int x, c = 0;
    while(1){
        cin >> x;
        if (x == 0) break;
        printf("Case %d: %d\n", ++c, x);
    }
    return 0;
}

