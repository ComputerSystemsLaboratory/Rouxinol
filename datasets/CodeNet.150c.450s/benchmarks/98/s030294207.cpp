#include<iostream>
#include<vector>
#include<algorithm>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m){
        if(n==0 && m==0) break;
        int t_sum=0, h_sum=0;
        int taros[n], hanakos[m];
        REP(i,n){
            cin >> taros[i];
            t_sum += taros[i];
        }
        REP(i,m){
            cin >> hanakos[i];
            h_sum += hanakos[i];
        }

        int t_ans=100, h_ans=100;
        REP(i,n){
            REP(j,m){
                int tmp_taro = t_sum - taros[i] + hanakos[j];
                int tmp_hanako = h_sum - hanakos[j] + taros[i];
                if(tmp_taro == tmp_hanako && taros[i]+hanakos[j]<t_ans+h_ans){
                    t_ans = taros[i];
                    h_ans = hanakos[j];
                }
            }
        }

        if(t_ans+h_ans == 200) cout << -1 << endl;
        else{
            cout << t_ans << ' ' << h_ans << endl;
        }
    }
    return 0;
}