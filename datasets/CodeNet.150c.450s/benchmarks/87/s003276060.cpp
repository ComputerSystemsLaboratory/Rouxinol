#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (int)n;i++)
#define repb(i,n) for(int i = (int)n;i >= 0;i--)
#define reps(i,m,n) for(int i = (int)m;i < (int)n;i++)
#define repsb(i,m,n) for(int i = (int)m;i >= (int)n;i--)
#define SORT(v,n) sort(v,v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
#define INF 999999999999999999
#define ll long long int
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1;} return 0;}
//vector<vector<int>> vec(n_rows, vector<int>(n_cols, value));
using namespace std;
int main(int argc, char const *argv[]) {
    int h;
    int m[10][5];
    while (cin >> h, h)
    {
        bool f = false;
        int score = 0;
        rep(i, 2)
        {
            rep(j,10){
                    m[i][j] = 0;
                }
            }
        rep(i,h){
            rep(j,5){
                cin>>m[i][j];
            }
        }

        while(1){
            f = false;
            rep(i, h)
            {
                rep(j,5){
                    int cnt=0;
                    bool re = false;
                    reps(k, j + 1, 5)
                    {
                        //cout << "jk" << j << k << endl;
                        if (m[i][j] == m[i][k]&&m[i][j]!=0)
                        {
                            cnt++;
                            //cout << "this" << cnt << endl;
                            re = true;
                        }
                        if (m[i][j] != m[i][k])
                        {
                            re = false;
                        }

                        if (k + 1 == 5||!re)
                        {
                            if (cnt + 1 >= 3)
                            {
                                f = true;
                                //cout << "ij"<<i<<j<<endl;
                                score += (cnt+1) * m[i][j];
                                
                                //cout <<"score"<< score << endl;
                                reps(s, j, j + cnt+1)
                                {
                                    m[i][s] = 0;
                                }
                            }
                            cnt = 0;
                            break;
                            
                        }
                    }
                    //cout << "-------------------" << endl;
                    // rep(i, h)
                    // {
                    //     rep(j, 5)
                    //     {
                    //         cout << m[i][j]<<" ";
                    //     }
                    //     cout << endl;
                    // }
                }
            }
            if(!f){
                cout << score << endl;
                break;
            }
            //cout << "詰める" << endl;
            //詰める
            repb(i,h-1){
                repb(j,5-1){
                    if (m[i][j] == 0)
                    {
                        repb(k, i)
                        {
                            
                            
                            if (m[k][j] != 0)
                            {
                                //cout << "("<<i <<","<<j<<")"<<"("<<k<<","<<j<<")"<< endl;
                                //cout << m[i][j] << "|||";
                                // cout << m[k][j] << endl;
                                swap(m[i][j] , m[k][j]);
                                break;
                            }
                        }
                    }
                }
            }
            
        }
    }
    return 0;
}

