#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // 頂点数
    int cnt_vertex(0);

    cin >> cnt_vertex;
    vector<vector<int>> vecGraph(cnt_vertex,vector<int>(cnt_vertex,0));

    int num_vertex(0), cnt_exit_vertex(0);

    for (int i = 0; i < cnt_vertex; i++)
    {
        cin >> num_vertex >> cnt_exit_vertex;
        int num_next_vertex(0);
        for (int j = 0; j < cnt_exit_vertex; j++)
        {
            cin >> num_next_vertex;
            // cout << endl;
            // cout << cnt_vertex << endl;
            vecGraph[i][num_next_vertex-1] = 1;
        }
    }

    for (int i = 0; i < cnt_vertex; i++)
    {
        for (int j = 0; j < cnt_vertex; j++)
        {
            if(j == cnt_vertex-1) {
                cout << vecGraph[i][j] << "\n";
            } else {
                cout << vecGraph[i][j] << " ";
            }
        }
    }
    
    return 0;
}

