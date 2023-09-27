#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

int a,b;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> a >> b;

    cout << gcd(a,b) << '\n';
    return 0;
}
