#include <iostream>
using namespace std;

int E;

void solve(){
    while(cin >> E && E > 0){
        int x,y,z;
        int X,Y,Z;
        int min = 100000;
        for (z = 0; z*z*z <= E; z++){
            for (y = 0; y*y + z*z*z <= E;y++){
                x = E - y*y - z*z*z;
                if (min > x + y + z){
                    min = x + y + z;
                }
            }
        }
        cout << min << endl;
    }
}

int main(){
    solve();
}

