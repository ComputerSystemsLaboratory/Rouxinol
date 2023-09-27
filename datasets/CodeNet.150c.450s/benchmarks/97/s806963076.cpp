#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> Pii;

typedef struct pos {
    int x;
    int y;
} pos;
pos data[200];

int dir_x[4] = {-1,  0,  1,  0};
int dir_y[4] = { 0,  1,  0, -1};

int main(void) {
    int n;
    while(1) {
        cin >> n;
        //cout << n << endl;
        if (n == 0) break;
        int min_x = 0;
        int max_x = 0;
        int min_y = 0;
        int max_y = 0;
        data[0].x = 0;
        data[0].y = 0;
        for(int i=1; i<n; i++) {
            int sn, sd;
            cin >> sn >> sd;
            data[i].x = data[sn].x + dir_x[sd];
            data[i].y = data[sn].y + dir_y[sd];
            if(min_x > data[i].x) min_x = data[i].x;
            if(max_x < data[i].x) max_x = data[i].x;
            if(min_y > data[i].y) min_y = data[i].y;
            if(max_y < data[i].y) max_y = data[i].y;
        }
        cout << (max_x - min_x + 1) << " " << (max_y - min_y + 1) << endl;
    }
    return 0;
}