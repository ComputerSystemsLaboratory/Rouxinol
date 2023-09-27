#include <iostream>
using namespace std;

int main(){

    int res = 1;
    while(res){
        cin >> res;

        if(res == 0)
            break;

        int n[2][res];

        for(int i=0; i<res; i++){
            cin >> n[0][i];
            cin >> n[1][i];
        }
        int x = 0;
        int y = 0;

        for(int j=0; j<res; j++){
            if(n[0][j]>n[1][j])
                x += n[0][j]+n[1][j];
            else if(n[0][j]==n[1][j]){
                x += n[0][j];
                y += n[1][j];
            }
            else
                y += n[0][j]+n[1][j];
            }

            cout << x << ' ' << y << '\n';

    }

    return 0;
}

