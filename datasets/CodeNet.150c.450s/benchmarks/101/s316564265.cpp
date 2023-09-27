#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

static const int NIL = -1;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    vector<int> color(n, NIL);
    vector<vector<int>> node_list(n, vector<int>(0));

    int v1, v2;
    rep(i, m)
    {
        cin >> v1 >> v2;
        node_list.at(v1).push_back(v2);
        node_list.at(v2).push_back(v1);
    }

    int count = 0;
    auto paint_color = [&](int s) {
        if (color.at(s) != NIL)
        {
            
            return;
        }

        queue<int> q;
        q.push(s);
        color.at(s) = count;

        while (!q.empty())
        {
            v1 = q.front();
            q.pop();
            
            for (size_t i = 0; i < node_list.at(v1).size(); i++)
            {
                if (color.at(node_list.at(v1).at(i)) == NIL)
                {
                    q.push(node_list.at(v1).at(i));
                    color.at(node_list.at(v1).at(i)) = count;
                }
            }
        }

        count++;
    };

    rep(i, n)
    {
        paint_color(i);
    }

    int w;
    cin >> w;
    rep(i, w)
    {
        cin >> v1 >> v2;
        if(color.at(v1)==color.at(v2))
        {
            cout << "yes" << endl ;
        }
        else
        {
            cout << "no" << endl ;
        }
        
    }
    
    return 0 ;
}
