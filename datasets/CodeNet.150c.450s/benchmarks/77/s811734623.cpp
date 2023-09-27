#include <iostream>
using namespace std;

int main(){
    int n, x, y, m, d;
    char l;
    int field[21][21];
    int rx, ry;
    cin >> n;
    while(n){
        for(int i=0;i<21;++i){
            for(int j=0;j<21;++j){
                field[i][j] = 0;
            }
        }
        rx = 10, ry = 10;
        for(int i=0;i<n;++i){
            cin >> x >> y;
            field[x][y] = 1;
        }
        cin >> m;
        for(int i=0;i<m;++i){
            cin >> l >> d;
            for(int j=0;j<d;++j){
                switch(l){
                    case 'N':
                        ++ry;
                        break;
                    case 'S':
                        --ry;
                        break;
                    case 'E':
                        ++rx;
                        break;
                    case 'W':
                        --rx;
                        break;
                }
                if(field[rx][ry] == 1){
                    field[rx][ry] = 0;
                    --n;
                }
            }
        }
        if(n) cout << "No" << endl;
        else cout << "Yes" << endl;
        cin >> n;
    }
}