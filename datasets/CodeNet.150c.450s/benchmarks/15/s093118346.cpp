#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,q,C=0;
    int S[10001], T[501];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &S[i]);
    }
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        scanf("%d", &T[i]);
    }
    for (int i = 0; i < q; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (T[i]==S[j])
            {
                C++; break;
            }
        }
    }

    cout << C << endl;
    return 0;
}