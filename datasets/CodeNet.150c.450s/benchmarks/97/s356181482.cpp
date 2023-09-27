#include <iostream>

using namespace std;

char dx[] = {-1, 0, 1, 0};
char dy[] = {0, 1, 0, -1};

int main(){
    int N;
    int x[200], y[200];
    x[0] = y[0] = 0;
    while(cin >> N, N){
        for(int i=0;i<N-1;i++){
            int ni, di; cin >> ni >> di;
            x[i+1] = x[ni] + dx[di];
            y[i+1] = y[ni] + dy[di];
        }
        int minx = 0, maxx = 0, miny = 0, maxy = 0;
        for(int i=0;i<N;i++){
            minx = min(minx, x[i]);
            maxx = max(maxx, x[i]);
            miny = min(miny, y[i]);
            maxy = max(maxy, y[i]);
        }
        cout << (maxx-minx+1) << " " << (maxy-miny+1) << endl;
    }
}