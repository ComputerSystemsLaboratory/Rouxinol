#include <iostream>
using namespace std;
 
int main(){
    int n,x,rmin,res = -1000000000,r;
    bool check = false;
    cin >> n;
    cin >> r;
    rmin = r;
    x = r;
    for(int i = 0;i < n - 1;i++){
        cin >> r;
        if(x <= r){
            check = true;
            res = max(res,r - rmin);
        }
        else{
            rmin = min(rmin,r);
            res = max(res,r - x);
        }
        x = r;
    }
    if(check){
    cout << res << endl;
    }
    else cout << res << endl;
    return 0;
}