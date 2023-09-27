#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main ()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int len1 = s1.length() + 1;
    int len2 = s2.length() + 1;

    vector< vector<int> > mat;
    mat.resize(len1);
    for (int i = 0; i < len1; ++i)
    {
        mat[i].resize(len2);
    }

    for (int i = 0; i < len1; ++i)
    {
        mat[i][0] = i;
    }
    for (int j = 0; j < len2; ++j)
    {
        mat[0][j] = j;
    }

    for (int i = 1; i < len1; ++i)
    {
        for (int j = 1; j < len2; ++j)
        {
            mat[i][j] = min(mat[i-1][j], mat[i][j-1]);
            if (s1[i-1] == s2[j-1])
            {
                mat[i][j] = min(mat[i-1][j-1], ++mat[i][j]);
            }
            else
            {
                mat[i][j] = min(mat[i][j], mat[i-1][j-1]);
                ++mat[i][j];
            }
        }
    }


    cout << mat.back().back() << endl;

}