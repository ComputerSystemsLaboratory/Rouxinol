#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>

typedef long long ll;
const ll MOD = 1e9 + 7;
const long long INF = 1LL<<60;
const double PI=3.14159265358979323846;
const int NMAX=100005;
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << n << ":";

    int i = 2;
    double l = sqrt(n);
    int ans = 1;
    while(i <= l){
        if(n%i == 0){
            cout << " " << i;
            n = n/i;
            l = sqrt(n);
        } else {
            i++;
        }
    }
    cout << " " << n;
    cout << endl;
    
    return 0;
}
