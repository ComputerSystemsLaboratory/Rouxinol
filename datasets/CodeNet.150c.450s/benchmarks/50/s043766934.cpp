#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        n = 1000 - n;
        int ans = n/500+n%500/100+
            n%100/50+n%50/10+
            n%10/5+ n%5;
        cout << ans << endl;
    }
    return 0;
}
    
