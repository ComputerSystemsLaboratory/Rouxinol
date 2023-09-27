#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,q;
    long long S[10000], T[10000];
    cin >> n;
    for(int i = 0; i<n;i++)
        cin >> S[i];
    cin >> q;
    for(int i = 0; i<q;i++)
        cin >> T[i];
    int count =0;

        for(int j = 0;j<q;j++)
            for(int i = 0;i<n;i++)
    {
        if (S[i]==T[j])
           {

            count++;
            break;}
    }
    cout << count <<endl;
    return 0;
}

