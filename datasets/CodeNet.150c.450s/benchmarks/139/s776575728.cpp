#include <bits/stdc++.h>
using namespace std;
typedef long long lol;

//マクロ
//forループ関係
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
//Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define REP(i,n) for(lol i=0;i<lol(n);i++)
#define REPD(i,n) for(lol i=n-1;i>=0;i--)
#define FOR(i,a,b) for(lol i=a;i<=lol(b);i++)
#define FORD(i,a,b) for(lol i=a;i>=lol(b);i--)
//xにはvectorなどのコンテナ
#define ALL(x) x.begin(),x.end() //sortなどの引数を省略したい
#define SIZE(x) lol(x.size()) //sizeをsize_tからllに直しておく
//定数
#define INF 1000000000000 //10^12:極めて大きい値,∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange(素数列挙などで使用)
//最大値最小値
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int gcd(int a,int b){return b?gcd(b,a%b):a;}

void rec(vector<vector<int>>, int[], int, vector<int>);

int main()
{
    lol result{0};
    int a1, a2;
    int n; cin >> n;
    int m; cin >> m;
    vector<vector<int>> a(n+1);
    vector<int> b(n+1, 0);
    FOR(i, 1, m)
    {
        cin >> a1 >> a2;
        a[a1].push_back(a2);
        a[a2].push_back(a1);
    }

    bool fl = true;
    bool flag = true;

    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int i = q.front();
        q.pop();
        REP(j, a[i].size())
        {
            if(b[a[i][j]] == 0)
            {
                b[a[i][j]] = i;
                //cout << a[i][j] << " ";
                q.push(a[i][j]);
            }
        }
    }

    FOR(i, 2, n)
    {
        if(b[i] == 0)
            flag = false;
    }
    if(flag)
    {
        cout << "Yes" << endl;

        for(int i = 2; i <= n; i++)
        {
            cout << b[i] << endl;
        }
    }
    else
    {
        cout << "No" << endl;
        
    }
    
    return 0;
}
