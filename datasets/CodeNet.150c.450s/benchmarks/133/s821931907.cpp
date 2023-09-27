#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;

    vector<vector<int> > A(365,vector<int>(26));
    vector<int> c(26);
    for (size_t i = 0; i < 26; i++)
    {
        cin >> c.at(i);
        sum += c.at(i);
    }
    
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < 26; j++)
        {
            cin >> A.at(i).at(j);
        }
        
    }
    vector<int> fuman(26,0);;
    int t;
    int f = 0;
    int ans = 0;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < 26; j++)
        {
            fuman.at(j)++;
        }
        

        cin >> t;
        fuman.at(t-1) = 0;
        for (size_t j = 0; j < 26; j++)
        {
            f += c.at(j)*fuman.at(j);
        }
        ans += A.at(i).at(t-1) - f;
        cout << ans << endl;
        f = 0;
    }
    
    //cout << sum << endl;

    return 0;
}