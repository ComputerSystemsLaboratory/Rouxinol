#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int N, A, B, C, X;
    while(cin>>N>>A>>B>>C>>X, N|A|B|C|X){
        int f = 0;
        int y;
        for(int i=0; i<N; i++){
            cin >> y;
            while(X!=y && f<=10000){
                X = (A * X + B) % C;
                f++;
            }
            X = (A * X + B) % C;
            f++;
        }
        cout << (f>10001 ? -1 : f-1) << endl;
    }
    
    return 0;
}