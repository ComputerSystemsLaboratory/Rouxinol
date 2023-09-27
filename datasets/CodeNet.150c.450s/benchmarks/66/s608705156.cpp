#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string,bool> ma;
    rep(i,n) {
        string s;
        cin >> s;
        ma[s] = true;
    }

    int m;
    cin >> m;

    bool lock = true;
    rep(i,m) {
        string s;
        cin >> s;

        if(!ma[s]) cout << "Unknown " << s << endl;
        else {
            if(lock) cout << "Opened by " << s << endl;
            else cout << "Closed by " << s << endl;
            lock = !lock;
        }
    }
    
    return 0;
}