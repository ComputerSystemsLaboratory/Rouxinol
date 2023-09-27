#include <iostream>
#include <string>
using namespace std;
int main(void){
    string w, a, b;
    int ans = 0;
    cin >> w;
    while(cin >> a){
        for(int i = 0; i < a.length(); i++){
            if(a[i] >= 'A' && a[i] <= 'Z' ) {
                a[i] -= 'A' - 'a';
            }
        }
        if(a == w){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

