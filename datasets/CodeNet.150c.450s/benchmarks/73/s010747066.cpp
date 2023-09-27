#include <iostream>
using namespace std;
int n,q;
int s[200000];
int main(){
    int a,b,c;
    cin >> n >> q;
    for(int i = 1;i < q + 1; i++){
        cin >> a >> b >> c;
        if(a == 0){
            s[b] += c;
        }
        if(a == 1){
            int ans = 0;
            for(int j = b; j < c + 1;j++){
                ans += s[j];
            }
            cout << ans << endl;
        }
    }
    return 0;
}
