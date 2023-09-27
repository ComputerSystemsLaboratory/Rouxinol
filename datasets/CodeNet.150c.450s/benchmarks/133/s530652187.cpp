#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using P = pair<int,int>;
using ll = long long; 

int main(){
    //入力
    int d;
    cin>>d;
    vector<int> c;
    int all_c=0;
    int tmp;
    rep(i,26){
        cin>>tmp;
        c.push_back(tmp);
        all_c+=tmp;
    }
    vector<vector<int>> s(d, vector<int>(26));
    rep(i,d){
        rep(j,26){
            cin>>s.at(i).at(j);
        }
    }

    //初期化
    vector<int> last;
    rep(i,26){
        last.push_back(0);
    }

    //コンテスト入力
    int score=0;
    int contest;
    int complain;
    rep(i,d){
        cin>>contest;
        complain=0;
        rep(j,26){
            if(j!=(contest-1)){
                last[j]+=1;
                complain+=c[j]*last[j];
            }else{
                last[j]=0;
            }
        }
        score = score + s[i][contest-1] - complain;
        cout<<score<<endl;
    }


   return 0;

}
