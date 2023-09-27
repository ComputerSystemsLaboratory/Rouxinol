#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll LongINF=1e13+7;
const int INF=1e9+7;
const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template <class T, class Y>T GCD(T a, Y b){if(a<b){int c=a;a=b;b=c;}if (a % b == 0){return b;}return GCD(b, a % b);}
void clear(queue<pair<int, int>> &q){queue<pair<int, int>> empty;swap(q, empty);} //queueの中身の型は適時変更を忘れない

#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define rv reverse

int main(){
    string A,B;
    cin>>A>>B;
    
    vector<vector<int> >dp(1010,vector<int>(1010,INF));
    int L=A.length(),O=B.length();
    dp[0][0]=0;

    REP(i,-1,L){
        REP(j,-1,O){
            if(i==-1&&j==-1)continue;
            if(i>=0&&j>=0){
                if(A[i]==B[j])dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]);//変更する必要がない
                else dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]+1);//変更する
            }
            if(i>=0)dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j+1]+1);//文字の長さを合わせる必要がある
            if(j>=0)dp[i+1][j+1]=min(dp[i+1][j+1],dp[i+1][j]+1);//上記と同様 ただ、削除か挿入のどちらかという違い
        }
    }

    cout<<dp[L][O]<<endl;



    return 0;
}

//a=97,z=122
