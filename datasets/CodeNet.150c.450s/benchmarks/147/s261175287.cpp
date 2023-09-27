#include<bits/stdc++.h>
#define ll uint64_t
using namespace std;

int main(){
    int N;
    cin >> N;
    vector < int > a(100001, 0);
    for(int x = 1; x <= 100; x++){
        for(int y = 1; y <= 100; y++){
            for(int z = 1; z <= 100; z++){
                ll v = x*x + y*y + z*z + x*y + y*z + z*x;
                if(v <= 10000){
                    a[v]++;
                }
            }
        }
    }

    for(int n = 1; n <= N; n++){
        cout << a[n] << "\n";
    }
    return 0;
}
