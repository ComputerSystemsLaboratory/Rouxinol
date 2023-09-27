#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define pb(a) push_back(a)

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<pii> VP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int main() {
    int puz[10][5] = {};
    bool isdelete[10][5];
    int n;
    while(cin >> n) {
        if(n == 0) break;
        rep(i,0,n) {
            rep(j,0,5) cin >> puz[n-1-i][j];
        }

        /*rep(i,0,n) {
            rep(j,0,5) cout << puz[i][j] << " ";
            cout << endl;
        }*/

        int x = 0;
        int cnt = 1;
        bool flag;
        int ret = 0;
        int temp = 0;
        while(1) {
            rep(i,0,n) {
                rep(j,0,5) {
                    isdelete[i][j] = false;
                }
            }

            rep(i,0,n) {
                rep(j,0,5) {
                    if(puz[i][j] == x && x != 0) cnt++;
                    else {
                        cnt = 1;
                        x = puz[i][j];
                    }

                    if(cnt >= 3) {
                        //cout << "true" << endl;
                        flag = true;
                        rep(k,j-cnt+1,j+1) isdelete[i][k] = true;
                        temp = cnt * x;
                    }
                }
                ret += temp;
                x = 0;
                cnt = 1;
                temp = 0;
            }
            if(!flag) break;
            rep(i,0,n) {
                rep(j,0,5) {
                    if(isdelete[i][j]) puz[i][j] = 0;
                }
            }

            rep(i,0,n) {
                rep(j,0,5) {
                    int k = i;
                    while(k>=1 && puz[k-1][j] == 0) {
                        puz[k-1][j] = puz[k][j];
                        puz[k][j] = 0;
                        k--;
                    }
                }
            }

            /*cout << endl;
            rep(i,0,n) {
                rep(j,0,5) cout << puz[n-1-i][j] << " ";
                cout << endl;
            }*/

            flag = false;
        }

        cout << ret << endl;
        ret = 0;
    }
    return 0;
}