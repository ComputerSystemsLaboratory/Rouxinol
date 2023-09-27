#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
using namespace std;

//テ・ツ個コテゥツ鳴鄭[a,b]テ」ツ?ィテ・ツ個コテゥツ鳴釘[c,d]テ」ツ?ョテゥツ鳴「テ、ツソツ?
int intervalState(int a, int b, int c, int d){
    if(a <= c && b <= c) return 0;            //A < B
    else if(a >= d && b >= d) return 1;       //A > B
    else if(a <= c && d <= b) return 2;     //A -> B
    else if(c < a && b < d) return 3;       //B -> A
    else if(a <= c && b < d) return 4;      //A <= B
    else if(c < a && d <= b) return 5;      //A >= B
    return -1;
}

bool check(vector<pair<int,int>> v, pair<int,int> p){
    rep(i,v.size()){
        //cout << v[i].first << ' ' << v[i].second<< endl;
        int tmp = intervalState(v[i].first,v[i].second,p.first,p.second);
        if(not(tmp == 0 || tmp == 1)) return false;
    }
    return true;
}

int main(){
    int n;
    while(cin >> n,n){
        pair<int,int> p[10005];
        rep(i,n){
            int h, m, s;
            char g;
            cin >> h >> g >> m >> g >> s;
            int x = h * 60 * 60 + m * 60 + s;

            cin >> h >> g >> m >> g >> s;
            int y = h * 60 * 60 + m * 60 + s;

            p[i] = make_pair(x,y);
        }
        sort(p, p + n);

        vector<pair<int,int>> v[10005];
        rep(i,n){
            int j = 0;
            //cout << p[i].first << ' ' << p[i].second << endl;
            while(true){
                if(v[j].empty()) {
                    v[j].emplace_back(p[i]);
                    break;
                }else{
                    if(check(v[j],p[i])){
                        v[j].emplace_back(p[i]);
                        break;
                    }else{
                        j++;
                    }
                }
            }
        }
        int ans = 0;
        rep(i,10001){
            if(v[i].empty()) break;
            ans++;
        }
        cout << ans << endl;
    }
}