#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    int n,p;
    while(cin >> n >> p,n) {
        int ar[51] = {};
        int i = 0;
        int np = p;
        while(true) {
            if(np != 0) {
                np--;
                ar[i % n]++;
                if(ar[i % n] == p) {
                    cout << i % n << endl;
                    break;
                }
            }else{
                np = ar[i % n];
                ar[i % n] = 0;
            }
            i++;
        }
    }

    return 0;
}

