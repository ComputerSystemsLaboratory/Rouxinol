#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,c,cnt = 0;
    while(cin >> a >> b >> c){
        for(int i = a; i <= b; i++) {
            if(c % i == 0){
                ++cnt;
            }
        }
        cout << cnt << endl;
        return 0;
    }
}