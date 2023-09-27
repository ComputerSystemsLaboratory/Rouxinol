#include <iostream>
#include <vector>
using namespace std;

#define SPACE 21

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(void){
    while(true){
        int n;
        cin >> n;
        if(n == 0){ break; }

        int x, y;
        vector<vector<bool> > field(SPACE, vector<bool>(SPACE, false));
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            field[x][y] = true;
        }

        int m, l, d_int;
        char d;
        cin >> m;
        x = y = 10;
        for(int i = 0; i < m; i++){
            cin >> d >> l;
            switch(d){
            case 'N': d_int = 0; break;
            case 'E': d_int = 1; break;
            case 'S': d_int = 2; break;
            case 'W': d_int = 3; break;
            }

            for(int j = 0; j < l; j++){
                x += dx[d_int];
                y += dy[d_int];
                if(field[x][y]){
                    field[x][y] = false;
                    --n;
                }
            }
        }

        if(n == 0){ cout << "Yes" << endl; }
        else{ cout << "No" << endl; }
    }

    return 0;
}