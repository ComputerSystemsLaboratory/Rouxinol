#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int x, y; cin >> x >> y;
        if(x == 0 && y == 0) break;
        printf("%d %d\n", min(x, y), max(x, y));
    }
}
