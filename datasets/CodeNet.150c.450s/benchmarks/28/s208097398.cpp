#include <bits/stdc++.h>
#define rep(i,s,n) for(int i=s;i<n;i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define all_acc(x) (x).begin(),(x).end(),0LL
#define int long long
#define absSort(v) sort(a.begin(), a.end(), [](int i, int j) -> bool {return abs(i) < abs(j);});
using namespace std;
using P=pair<int,int>;
using Graph=vector<vector<int>>;
using ll=long long;

//出力するよ
void output(vector<int> s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(i!=0) cout<<" ";
        cout<<s[i];//<<endl;
    }
    cout<<endl;
}

void insert(string s,set<string> se){
    se.insert(s);
}

string find(string s,set<string> se){
    if(se.count(s)) return "yes";
    else return "no";
}

int n,k;
vector<int> w;

//最大積載量がpで、車がk台あるときに、すべて積むことが出来るのか
bool able(int p){
    int car=1;
    int weight=0;
    bool possible=true;

    for(int i=0;i<n;i++){
        if(w[i]>p) return false;

        if(weight+w[i]>p){
            car++;
            weight=w[i];
        }else{
            weight+=w[i];
        }
    }

    if(car<=k) return true;
    else return false;
}

signed main(){
    cin>>n>>k;
    w.assign(n,0);
    for(int i=0;i<n;i++) cin>>w[i];

    int ok=10000*n;
    int ng=0;

    while((ok-ng)>1){
        int mid=(ok+ng)/2;
        if(able(mid)){
            ok=mid;
        }else{
            ng=mid;
        }
    }

    cout<<ok<<endl;
}
