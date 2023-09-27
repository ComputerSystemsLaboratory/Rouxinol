#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int xs[n];
    for(int i = 0; i < n; ++i){
        cin >> xs[i];
    }
    int q;
    cin >> q;
    int v = 0;
    int cnt = 0;
    for(int i = 0; i < q; ++i){
        cin >> v;
        for(int j = 0; j < n; ++j){
            if(xs[j] == v){
                ++cnt;
                break;
            }
        }
    }
    cout << cnt << '\n';
}