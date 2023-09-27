#include <iostream>
#include <cstring>
using namespace std;
int r,c;
int max_on;
int row_on[11];
int col_on[10005];
bool grid[11][10005];
bool flip_pattern[11];
int cur_on = 0;
//
void setFlipStatus(unsigned int p){
    for (int i = 0; i<r; ++i) {
        if (p & (1<<i)) {
            flip_pattern[i] = true;
        }
        else
            flip_pattern[i] = false;
    }
}
void flip_rows(){
    for (int i = 0; i<r; ++i){
        if (flip_pattern[i]) {
            for (int j = 0; j<c; ++j) {
                grid[i][j] = !grid[i][j];
                if(grid[i][j])
                    col_on[j]++;
                else
                    col_on[j]--;
            }
            row_on[i] = c - row_on[i];
            cur_on += 2*row_on[i] - c;
        }
    }
}
void find_cur_max(){
    int ori_on = cur_on;
    for (int j = 0; j<c; ++j) {
        if(r-col_on[j]>col_on[j]){
            cur_on += r - 2*col_on[j];
        }
    }
    if (cur_on>max_on)
        max_on = cur_on;
    
    cur_on = ori_on;
}
int main(){
    while (cin>>r>>c && r &&c) {
        max_on = 0;
        cur_on = 0;
        memset(flip_pattern, 0, sizeof(flip_pattern));
        memset(row_on, 0, sizeof(row_on));
        memset(col_on, 0, sizeof(col_on));
        //
        for (int i = 0; i < r; ++i)
            for (int j = 0; j<c ; ++j) {
                cin>>grid[i][j];
                if (grid[i][j]) {
                    cur_on++;
                    row_on[i]++;
                    col_on[j]++;
                }
            }
        max_on = cur_on;
        //
        unsigned int status_size = 1<<r;
        for (unsigned int i=0; i<status_size;++i ) {
            //??¨??????????????¬?????????
            setFlipStatus(i);
            flip_rows();
            find_cur_max();
            flip_rows();
        }
        cout<<max_on<<endl;
    }
    
    
    
    return 0;
}