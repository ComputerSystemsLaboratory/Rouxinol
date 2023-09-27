#include<bits/stdc++.h>

using namespace std;

int main(void)
{   
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};
    int n;
    while(cin >> n){
        if(!n) break;

        vector<int> x(n, 0);
        vector<int> y(n, 0);
        int xmin = 0;
        int xmax = 0;
        int ymin = 0;
        int ymax = 0;

        for(int i = 1; i < n; i++){
            int ni, di; cin >> ni >> di;
            x[i] = x[ni] + dx[di];
            y[i] = y[ni] + dy[di];

            xmin = min(xmin, x[i]);
            xmax = max(xmax, x[i]);
            ymin = min(ymin, y[i]);
            ymax = max(ymax, y[i]);
        }

        cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
    }
    return 0;

}    