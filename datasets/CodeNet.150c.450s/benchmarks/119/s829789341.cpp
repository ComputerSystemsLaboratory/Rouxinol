#include <iostream>
using namespace std;

int fill(int field[50][50], int x, int y, int w, int h){
    if(field[x][y] == 1){
        field[x][y] = 0;
        if(x+1<w) fill(field, x+1, y, w, h);
        if(y+1<h) fill(field, x, y+1, w, h);
        if(x-1>=0) fill(field, x-1, y, w, h);
        if(y-1>=0) fill(field, x, y-1, w, h);
        if(x+1<w && y+1<h) fill(field, x+1, y+1, w, h);
        if(x+1<w && y-1>=0) fill(field, x+1, y-1, w, h);
        if(x-1>=0 && y+1<h) fill(field, x-1, y+1, w, h);
        if(x-1>=0 && y-1>=0) fill(field, x-1, y-1, w, h);
        return 1;
    }
    return 0;
}

int main(){
    int w, h;
    int field[50][50];
    int result;
    cin >> w >> h;
    while(w || h){
        result = 0;
        for(int i=0;i<h;++i){
            for(int j=0;j<w;++j){
                cin >> field[j][i];
            }
        }
        for(int i=0;i<h;++i){
            for(int j=0;j<w;++j){
                result += fill(field, j, i, w, h);
            }
        }
        cout << result << endl;
        cin >> w >> h;
    }
}