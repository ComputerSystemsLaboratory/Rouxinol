#include <iostream>

using namespace std;

int main(){
    int e;
    while(cin >> e, e){
        int m = e;
        for(int z=0; z*z*z<=e; ++z){
            int y = 1, n = e - z*z*z;
            for(; (y+1)*(y+1)<=n; ++y);
            int x = n - y*y;
            if(x+y+z < m)m = x+y+z;
        }
        cout << m << '\n';
    }
    return 0;
}