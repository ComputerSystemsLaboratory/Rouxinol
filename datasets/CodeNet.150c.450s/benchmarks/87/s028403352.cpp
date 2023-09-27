// AOJ1193
#include <bits/stdc++.h>
#define endl "\n"
#define rep(i,n) for(int i=0;i<int(n);i++)
#define e_b emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
template <class T>ostream &operator<<(ostream &o,const vector<T>&v) //vectorの中身を見る
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}
void map_p(map<int,int>& d){cout<<"map: ";for(auto a : d){cout<<"{"<<a.first<<":"<<a.second<<"}";}cout<<endl;} //mapの中身を見る
void set_p(set<int>& d){cout<<"set: ";for(int a : d){cout<<a<<" ";}cout<<endl;} //setの中身を見る


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    int h;
    while(cin>>h){
        if(h==0) break;
        vector<vector<int>> ban(h,vector<int>(5,0));
        int score=0;
        rep(i,h){
            rep(j,5){
                cin>>ban[i][j];
            }
        }
        bool flag=true;
        while(flag){ //消せるものがあるまで続く。
            flag=false;
            // 各行に消せるものがあるかチェック
            rep(i,h){ 
                int cur=ban[i][0],ren=1,max_del=-1;
                for(int j=1;j<5;j++){
                    if(cur==ban[i][j]) ren++;
                    else{
                        if(3<=ren){
                            score+=cur*ren;
                            for(int k=j-1;k>=(j-1)-(ren-1);k=k-1) ban[i][k]=0;
                            max_del=max(max_del,cur);
                            // cout<<cur<<endl;
                        }
                        cur=ban[i][j],ren=1;
                    }
                }
                if(3<=ren){
                    score+=cur*ren;
                    for(int k=4;k>=4-(ren-1);k=k-1) ban[i][k]=0;
                    max_del=max(max_del,cur);
                    // cout<<cur<<endl;
                }
                if(1<=max_del) flag=true;
            }
            // 各列を下に詰める
            rep(j,5){ //列
                for(int i=h-1;i>=0;i=i-1){
                    if(ban[i][j]>=1) continue;
                    int now=i-1;
                    while(now>=0){
                        if(ban[now][j]>=1){
                            ban[i][j]=ban[now][j],ban[now][j]=0;
                            break;
                        }
                        now--;
                    }
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}
