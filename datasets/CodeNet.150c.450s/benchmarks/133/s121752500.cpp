#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D;
    cin >> D;
    int c[26];
    int sd[D][26];
    for (int i = 0; i < 26;i++)
        cin >> c[i];
    for (int i = 0; i < D;i++){
        for (int k = 0; k < 26;k++){
            cin>>sd[i][k];
        }
    }
    int ans[D];
    ans[0] = 0;
    int lastDay[26];
    for (int i = 0; i < 26;i++){
        lastDay[i] = 0;
    }
    int tmp = 0;
    int diff = 0;
    for (int i = 0; i < D; i++){
        cin >> tmp;
        diff = sd[i][tmp - 1];
        lastDay[tmp - 1] = i+1;
        for (int j = 0; j < 26;j++){
            if(j==tmp-1)
                continue;
            diff -= c[j] * ((i+1) - lastDay[j]);
        }
        if(i==0)
            ans[i] = diff;
        else
            ans[i] = ans[i-1]+diff;
    }
    for (int i = 0; i <D;i++)
        cout << ans[i] << endl;
}

