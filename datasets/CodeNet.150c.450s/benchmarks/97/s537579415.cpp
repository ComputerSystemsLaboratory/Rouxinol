#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    while(cin >> N, N){
        if(N == 1){
            cout << "1 1" << endl;
            continue;
        }
        vector<int> x(N);
        vector<int> y(N);
        int maxx =  0, maxy = 0;
        int minx =  0, miny = 0;
        x[0] = 0; y[0] = 0;
        for(int i=1; i <= N-1; i++){
            int n, d;
            cin >> n >> d;
            if(d == 0){
                x[i] = x[n] - 1;
                y[i] = y[n];
            }
            if(d == 1){
                y[i] = y[n] - 1;
                x[i] = x[n];
            }
            if(d == 2){
                x[i] = x[n] + 1;
                y[i] = y[n];
            }
            if(d == 3){
                y[i] = y[n] + 1;
                x[i] = x[n];
            }
            maxx = max(maxx, x[i]);
            minx = min(minx, x[i]);
            maxy = max(maxy, y[i]);
            miny = min(miny, y[i]);
        }
        cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
    }
}