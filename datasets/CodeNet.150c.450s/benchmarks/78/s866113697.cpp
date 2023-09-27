#include <bits/stdc++.h>
using namespace std;

#define req(i,r,k) for(int i=k;i<r;i++)
#define rep(i,r) req(i,r,0)
const int INF = 10000;

int dp[1000000];
int odddp[1000000];

const long  int h = 180,nmax=1000000;

int main() {

    int n,a,a2;

    vector<int> t;
    vector<int> oddt;

    req(i,200,1){
        t.push_back(i * (i+1) * (i+2) / 6);
        if(t[i-1]%2 == 1){
            oddt.push_back(t[i-1]);
        }
        if(t[i-1] > 1000000) {
            t.erase(t.end() - 1);
            break;
        }
    }

    rep(i,nmax){
        dp[i] = INF;
        odddp[i] = INF;
    }

    /*rep(i,20){
        rep(j,41){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/

/*
    rep(i,oddh){
        odddp[i][0] = 0;
    }
*/

    /*rep(i,oddh){
        cout << t[i*2] << endl;
    }*/

    dp[0] = 0;
    odddp[0] = 0;


    rep(i,h){
        rep(j,nmax){
            if(j >= t[i]){
                dp[j] = min(dp[j],dp[j-t[i]] + 1);
            }
            else{
                dp[j] = dp[j];
            }
        }
    }

    int oddh;

    oddh = oddt.size();

    rep(i,oddh){
        rep(j,nmax){
            if(j >= oddt[i]){
                odddp[j] = min(odddp[j],odddp[j-oddt[i]] + 1);
            }
            else{
                odddp[j] = odddp[j];
            }
        }
    }

    while(1){

        cin >> n;
        if(n==0) break;


        printf("%d %d\n",dp[n],odddp[n]);

        /*if(dp[h-1][n] == INF){
            rep(i,h){
                rep(j,namx){
                    if(j >= t[i]){
                        dp[i+1][j] = min(dp[i][j],dp[i][j-t[i]] + 1);
                    }
                    else{
                        dp[i+1][j] = dp[i][j];
                    }
                }
            }
        }

        cout << dp[h-1][n] << ' ';
         */
/*
        if(odddp[oddh-1][n] == INF){
            rep(i,oddh){
                rep(j,w){
                    if(j >= t[i]){
                        dp[i+1][j] = min(dp[i][j],dp[i][j-t[i]] + 1);
                    }
                    else{
                        dp[i+1][j] = dp[i][j];
                    }
                }
            }
        }

        cout << odddp[h-1][n] << endl;
*/
    }




    return 0;
}