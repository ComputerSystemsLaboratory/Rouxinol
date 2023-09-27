#include <iostream>
#include <string>
using namespace std;

int rec(string field[], int x, int y, int w, int h){
    int count=1;
    int f=0;
    field[y][x] = ',';
    if(x+1<w && field[y][x+1] == '.'){
        count += rec(field, x+1, y, w, h);
    }
    if(y+1<h && field[y+1][x] == '.'){
        count += rec(field, x, y+1, w, h);
    }
    if(x-1>=0 && field[y][x-1] == '.'){
        count += rec(field, x-1, y, w, h);
    }
    if(y-1>=0 && field[y-1][x] == '.'){
        count += rec(field, x, y-1, w, h);
    }
    return count;
}

int main(){
    int w, h;
    string field[20];
    int x, y;
    cin >> w >> h;
    while(w || h){
        x = string::npos;
        for(int i=0;i<h;++i){
            cin >> field[i];
            if(x==string::npos){
                x = field[i].find('@');
                y = i;
            }
        }
        cout << rec(field, x, y, w, h) << endl;
        cin >> w >> h;
    }
}