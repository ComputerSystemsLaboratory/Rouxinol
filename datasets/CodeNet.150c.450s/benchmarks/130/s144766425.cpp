#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++)
    {
        int c = 0;
        for(int j = 0; j < m; j++)
        {
            c += matrix[i][j]*b[j];
        }
        cout << c << '\n';
    }
	return 0;
}

