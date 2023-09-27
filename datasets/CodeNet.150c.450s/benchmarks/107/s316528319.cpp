#include <iostream>

using namespace std;

int d[1005][1005];

int edit_distance(string& s1, string& s2)
{
    for(int i = 0; i < 1005; ++i){
        d[0][i] = i;
        d[i][0] = i;
    }
    for(int i = 1; i <= s1.size(); ++i){
        for(int j = 1; j <= s2.size(); ++j){
            d[i][j] = min(d[i][j - 1] + 1, min(d[i - 1][j] + 1, d[i - 1][j - 1] + (s1[i - 1] != s2[j - 1])));
        }
    }
    return d[s1.size()][s2.size()];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << edit_distance(s1, s2) << endl;
}