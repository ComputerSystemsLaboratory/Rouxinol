#include <iostream>
#include <string>
#include <vector>

using namespace std;

void to_adjacent_matrix(vector<vector<int> >& adjacent_list, vector<vector<int> >& adjacent_matrix);

int main()
{
    int n;
    cin >> n;

    vector<vector<int> > vertex(n, vector<int>(n, -1));
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;

        for (int j = 0; j < k; ++j)
            cin >> vertex[i][j];
    }

    vector<vector<int> > adjacent(n, vector<int>(n, 0));
    to_adjacent_matrix(vertex, adjacent);

    for (int i = 0; i < n; ++i) {
        cout << adjacent[i][0];
        for (int j = 1; j < n; ++j)
            cout << ' ' << adjacent[i][j];
        cout << '\n';
    }
}

void to_adjacent_matrix(vector<vector<int> >& adjacent_list, vector<vector<int> >& adjacent_matrix)
{
    int n = adjacent_list.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n && adjacent_list[i][j] != -1; ++j) {
            int adjacent = adjacent_list[i][j] - 1;
            if (adjacent < 0 || adjacent > n)
                continue;

            adjacent_matrix[i][adjacent] = 1;
        }
    }
}

