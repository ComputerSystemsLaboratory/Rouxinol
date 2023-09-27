#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    while(cin >> n && n) {
        vector<vector<char> > v(n);
        rep(i,n) {
            rep(j,5) {
                char c;
                cin >> c;
                v[i].push_back(c);
            }
        }

        int ans = 0;
        while(true) {
            bool flag = true;

            rep(i,n) {
                rep(j,3) {
                    if(v[i][j] == '0') continue;

                    int len = 1;
                    REP(k,j+1,5) {
                        if(v[i][j] == v[i][k]) {
                            len++;
                        }
                        else break;
                    }

                    if(len >= 3) {
                        flag = false;
                        REP(k,j,j+len) {
                            ans += v[i][k] - '0';
                            v[i][k] = '0';
                        }
                    }
                }
            }

            if(flag) break;

            for(int i=n-1;i>0;i--) {
                rep(j,5) {
                    if(v[i][j] != '0') continue;

                    int y = i-1;
                    while(0 < y && v[y][j] == '0') y--;
                    swap(v[i][j],v[y][j]);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}