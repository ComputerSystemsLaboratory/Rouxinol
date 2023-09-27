#include <iostream>
using namespace std;
int n;
long long int d,c,day,ans;

long long solve(int d){
    if(d == 0) return 1;
    if(d < 0) return 0;
    c = solve(d-1) + solve(d-2) + solve(d-3);
    return c;
}

int main(void){
    // Your code here!
    while(cin >> n&&n){
        cout << solve(n)/3650 + 1 << endl;
    }
    return 0;
}