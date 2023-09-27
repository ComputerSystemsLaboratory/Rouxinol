#include<iostream>
using namespace std;

int main(){
    int a, b, n, x, y;
    int field[16][16];
    int i, j;
    cin >> a >> b;
    while(a || b){
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                field[i][j] = -1;
            }
        }
        for(i=0;i<a;i++){
            field[i][0] = 1;
        }
        for(i=0;i<b;i++){
            field[0][i] = 1;
        }
        cin >> n;
        for(i=0;i<n;i++){
            cin >> x >> y;
            field[x-1][y-1] = 0;
            if(!(y-1)){
                for(j=x;j<a;j++){
                    field[j][0] = 0;
                }
            }else if(!(x-1)){
                for(j=y;j<b;j++){
                    field[0][j] = 0;
                }
            }
        }
        for(i=1;i<a;i++){
            for(j=1;j<b;j++){
                if(field[i][j] < 0){
                    field[i][j] = field[i-1][j] + field[i][j-1];
                }
            }
        }
        cout << field[a-1][b-1] << endl;
        cin >> a >> b;
    }
}