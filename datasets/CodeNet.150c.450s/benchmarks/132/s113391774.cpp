#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

bool check(vector<int> v) {
    rep(i,v.size()) {
        if(v[i] != 0) return false;
    }
    return true;
}

int main()
{
    int n,p;
    while(cin >> n >> p)
    {
        if(n == 0 && p == 0) break;

        int ans = 0;
        int id = 0;
        int sum = p;
        vector<int> v(n);
        rep(i,n) v[i] = 0;
        
        while(true) {
            if(sum) {
                v[id]++;
                sum--;
            }
            else {
                sum += v[id];
                v[id] = 0;
            }

            if(check(v)) break;

            id++;
            id %= n;
            ans++;
        }

        cout << id << endl;
    }  

    return 0;
}