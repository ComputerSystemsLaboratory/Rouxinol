#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    int D;
    cin>>D;
    vector<int> c(26);
    rep(i,26){
        int tmp=0;
        cin>>tmp;
        c[i]=tmp;
    }
    vector<vector<int>> s(D,vector<int>(26));
    vector<int> last(26,0);//最後にiのテストをやってからの経過日数とする
    rep(i,D){
        rep(j,26){
            int stmp=0;
            cin>>stmp;
            s[i][j]=stmp;
        }
    }

    vector<int> ans(D);
    rep(i,D){
        int tmp;
        cin>>tmp;
        ans[i]=tmp;
    }
    
    //i日目の満足度を計算する
    int manzokudo=0;//sは0indexにつき
    rep(i,D){
        //i日目にやるやつはans[i]
        manzokudo+=s[i][ans[i]-1];//sは0indexにつき

        rep(j,26){
            //テストans[i]-1以外はやってないので満足度下がる
            if(j!=ans[i]-1)
            manzokudo+=c[j]*(last[j]+1)*-1;//やってないとしたので1ひいとく
        }
        //i日目にans[i]-1番のテストをやることに決めたので
        //ans[i]-1番以外のlastを1増やす,ans[i]-1番は0に戻る
        rep(j,26){
            if(j!=ans[i]-1){
                last[j]++;
            }else{
                last[j]=0;
            }
        }
        cout << manzokudo << endl;
    }


    return 0;
}