#include <bits/stdc++.h>
using namespace std;

int main(){
    int e;
    //x >= 0, y >= 0, z >= 0
    //x + y^2 + z^3 = e
    //find min(x + y + z)
    while(scanf("%d", &e) != EOF && e != 0){
        int min_v = 0x7fffffff;
        for(int z = 0; z * z * z <= e; z++){
            int y = sqrt(e - z * z * z), x = e - z * z * z - y * y;
            min_v = min(min_v, x + y + z);
        }
        printf("%d\n", min_v);
    }
    return 0;
}