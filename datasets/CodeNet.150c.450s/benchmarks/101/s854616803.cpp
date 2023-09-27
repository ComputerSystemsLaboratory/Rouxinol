// 連結成分
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

#include<queue>
#include<stack>

using namespace std;

#define MAX_N 100000

// 値の定義
const int INV = -1;

// 友達関係を保持するための構造体
typedef struct
{
    // 友達関係の個数
    int relation_num;
    // 関係を格納するための vector 配列
    vector<int> v_relation;
}st_Relation;

// 友達関係を保持する配列
st_Relation ary_Link[MAX_N + 1];

// 連結情報を保持する配列
int ary_connection[MAX_N + 1];

void search_relation(int u_ID, int id, int user_num);

int main(void)
{
    int n, m, q, s, t;

    for(int i = 0; i < MAX_N + 1; i++)
    {
        // 配列の初期化
        ary_Link[i].relation_num = 0;
        ary_connection[i] = INV;
    }

    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> s >> t;

        // 友達関係を双方向に設定する
        ary_Link[s].relation_num++;
        ary_Link[s].v_relation.push_back(t);

        ary_Link[t].relation_num++;
        ary_Link[t].v_relation.push_back(s);
    }

    int id = 1;

    for(int u = 0; u < n; u++)
    {
        if( ary_connection[u] == INV )
        {
            // 友達関係の検索を実施
            search_relation(u, id++, n);
        }
    }

    cin >> q;

    for(int i = 0; i < q; i++)
    {
        cin >> s >> t;

        // 質問の結果を表示する
        if( ary_connection[s] == ary_connection[t] )
        {
            // 友達関係が存在する
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}

// 友達関係を検索するための関数
// u_ID : 友達関係を検索する最初のユーザーID
// id   : ary_connection[]に設定するID値
// user_num : 全ユーザー数
void search_relation(int u_ID, int id, int user_num)
{

    int user_id;

    queue<int> Q;

    // 開始点をキューにプッシュする
    Q.push(u_ID);
    // 友達関係を保存する
    ary_connection[u_ID] = id;

    while( !Q.empty() )
    {
        // キューの先頭要素を取得して, 削除する
        // ( 一人のユーザーの巡回は1回だけ )
        int u = Q.front();
        Q.pop();

        for(int v = 0; v < ary_Link[u].relation_num; v++)
        {
            // 友達関係にあるユーザーの検索
            user_id = ary_Link[u].v_relation[v];

            if( ary_connection[user_id] == INV )
            {
                // ----- 未訪問の頂点が見つかった -----

                // 友達関係を保存する
                ary_connection[user_id] = id;

                // キューにプッシュして, 検索を継続する
                Q.push(user_id);
            }
        }
    }

    return;
}

