#include <iostream>
using namespace std;

int main(){
    int n,q,a[20],m[200],box[21][2001] = {1};
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    for(int i = 0; i < q; i++) cin >> m[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= 2000; j++){
            if(box[i][j] && j + a[i] <= 2000){
                box[i + 1][j + a[i]] = 1;
            }
            if(box[i][j]) box[i + 1][j] = 1;
        }
    }

    for(int i = 0; i < q; i++){
        if(box[n][m[i]])
            cout << "yes" << endl;
        else cout << "no" << endl;
    }
}