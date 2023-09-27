#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n,m,p;
    while(cin >> n >> m >> p) {
        if(n == 0 && m == 0 && p == 0) break;
        
        vector<int> X(n);
        int sum = 0;
        rep(i,n) { 
            cin >> X[i];
            sum += X[i];
        }

        sum *= (100 - p);
        if(X[m-1] == 0) cout << 0 << endl;
        else {
            sum /= X[m-1];

            cout << sum << endl;
        }
    }
}