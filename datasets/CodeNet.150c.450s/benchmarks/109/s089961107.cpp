#include<bits/stdc++.h>
using namespace std;

int main() {
    while (true)
    {
        int n; cin >> n;
        if(n == 0) break;
        vector<int> train(86410, 0);
        for (int i = 0; i < n; i++)
        {
            string ss, se; cin >> ss >> se;
            int sh = (ss[0] - '0') * 10 + ss[1] - '0';
            int sm = (ss[3] - '0') * 10 + ss[4] - '0';
            int ssec = (ss[6] - '0') * 10 + ss[7] - '0';
            int eh = (se[0] - '0') * 10 + se[1] - '0';
            int em = (se[3] - '0') * 10 + se[4] - '0';
            int esec = (se[6] - '0') * 10 + se[7] - '0';
            train[sh * 3600 + sm * 60 + ssec]++;
            train[eh * 3600 + em * 60 + esec]--;
        }
        for (int i = 0; i < 86400; i++)
        {
            if(i > 0) train[i] += train[i - 1];
        }
        int ans = 0;
        for (int i = 0; i < 86400; i++)
        {
            if(ans < train[i]) ans = train[i];
        }
        cout << ans << endl;
    }

}
