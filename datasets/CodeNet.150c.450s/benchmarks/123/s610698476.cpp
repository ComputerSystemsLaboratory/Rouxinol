#include <iostream>
using namespace std;
bool isP(int x){
    for(int i=2; i*i<=x; ++i){
        if(x%i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int res = 0;
    for(int i=0; i<n; ++i){
        int x; cin >> x;
        if(isP(x)) res++;
    }
    cout << res << endl;
    return 0;
}
