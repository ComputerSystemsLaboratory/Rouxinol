#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

bool prime[10000000];
void Eratosthenes(int n) {
    rep(i,n) prime[i] = true;
    prime[1] = false;

    REP(i,2,(int)sqrt(n)) {
        if(prime[i]) {
            for(int j=0;i*(j+2)<n;j++) {
                prime[i*(j+2)] = 0;
            }
        }
    }
}

int main()
{
    Eratosthenes(10000000);

    int a,d,n;
    while(cin >> a >> d >> n ) {
        if(a == 0 && d == 0 &&  n == 0) break;

        vector<int> v;
        for(int i=a;i<1000005;i+=d) {
            if(prime[i]) v.push_back(i);
        }

        cout << v[n-1] << endl;
    }

    return 0;
}