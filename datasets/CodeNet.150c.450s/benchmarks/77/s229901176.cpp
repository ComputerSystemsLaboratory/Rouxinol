#include <bits/stdc++.h>

#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define REP(i, n) for(int i = 0; i < (n); i++)
#define RREP(i, n) for(int i = (n)-1; i >= 0; i--)
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rrep(i, n) for(int i = (n)-1; i >= 0; i--)
#define loop while(true)

#define PB push_back
#define pb push_back
#define MP make_pair
#define mp make_pair
#define ALL(a) (a).begin(),(a).end()
#define all(a) (a).begin(),(a).end()

#define PII pair<int, int>
#define pii pair<int, int>
#define VB vector<bool>
#define VVB vector<vector<bool> >
#define VI vector<int>
#define VVI vector<vector<int> >

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

signed main()
{
    loop{
        int n;
        cin >> n;
        if(n == 0) break;

        VVB gem(21);
        rep(i, 21){
            gem[i].resize(21);
        }
        
        rep(i, n){
            int x, y;
            cin >> x >> y;
            gem[y][x] = true;
        }

        int pos_x = 10;
        int pos_y = 10;

        int m;
        cin >> m;
        int gem_num = 0;
        rep(i, m){
            char dir;
            int leng;
            cin >> dir >> leng;
            switch(dir){
            case 'N':
                rep(dy, leng){
                    if(gem[++pos_y][pos_x]){
                        gem_num++;
                        gem[pos_y][pos_x] = false;
                    }
                }
                break;
            case 'E':
                rep(dx, leng){
                    if(gem[pos_y][++pos_x]){
                        gem_num++;
                        gem[pos_y][pos_x] = false;
                    }
                }
                break;
            case 'S':
                rep(dy, leng){
                    if(gem[--pos_y][pos_x]){
                        gem_num++;
                        gem[pos_y][pos_x] = false;
                    }
                }
                break;
            case 'W':
                rep(dx, leng){
                    if(gem[pos_y][--pos_x]){
                        gem_num++;
                        gem[pos_y][pos_x] = false;
                    }
                }
                break;
            }

        }

        if(gem_num == n){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}