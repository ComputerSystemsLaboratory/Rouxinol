#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b, a+b){
        int n;
        cin >> n;
        int field[20][20];
        memset(field, 0, sizeof(field));
        for(int i=0; i < n; i++){int x, y; cin >> x >> y; field[y][x] = -1;}
        field[1][1] = 1;
        for(int i=1; i <= b; i++){
            for(int j=1; j <= a; j++){
                if(i == 1 && j == 1) continue;
                if(field[i][j] == -1) continue;
                else field[i][j] = (field[i][j-1]==-1?0:field[i][j-1]) + (field[i-1][j]==-1?0:field[i-1][j]);
            }
        }
        if(field[b][a] == -1) cout << 0 << endl;
        else cout << field[b][a] << endl;
    }
}