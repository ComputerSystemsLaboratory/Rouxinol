#include<bits/stdc++.h>

using namespace std;

int N, M;

int main()
{
    cin >> N;
    set<string> latte;
    for (int i = 0; i < N; i++)
    {
        string U;
        cin >> U;
        latte.insert(U);
    }
    cin >> M;
    bool state = false;
    for (int i = 0; i < M; i++)
{
        string T;
       cin >> T;
        if (latte.find(T) == latte.end())
        {
          cout << "Unknown " << T << endl;
            continue;
        }
        if (state) printf("Closed by ");
       else printf("Opened by ");
        cout << T << endl;
        state = !state;
}
    return 0;
}