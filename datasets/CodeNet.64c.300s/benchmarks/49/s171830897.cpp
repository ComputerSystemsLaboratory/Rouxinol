#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,ans;
    while(cin >> a >> b){
        ans = log10(a+b) + 1;
        cout << ans << endl;
    }
    return 0;
}