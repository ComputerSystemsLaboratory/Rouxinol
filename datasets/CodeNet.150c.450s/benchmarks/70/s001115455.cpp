#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;

string day[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};

ll zeller(ll y, ll m, ll d){
    if(m <= 2){
        y--;
        m += 12;
    }
    return (365 * y) + (y / 4) - (y / 100) + (y / 400) + (306 * (m + 1)) / 10 + d - 429;
}

int main(){
    int a,b;
    while(cin >> a >> b && a){
        int z = zeller(2004,a,b);
        cout << day[(z+1)%7] << endl;
    }
}