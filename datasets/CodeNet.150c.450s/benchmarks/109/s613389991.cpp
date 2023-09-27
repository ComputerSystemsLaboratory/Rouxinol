#include<iostream>
#include<string>
#include<vector>
using namespace std;

short ss[90061];
short ee[90061];
int ans[10000];
int c = 0;

int ch2int(char c){
    return (int)c - (int)'0';
}

int st2int(string s){
    return (ch2int(s[0]) * 10 + ch2int(s[1])) * 3600 + (ch2int(s[3]) * 10 + ch2int(s[4])) * 60 + ch2int(s[6]) * 10 + ch2int(s[7]);
}

int main()
{
    while(true){
        int n;
        cin >> n;
        if(n == 0) break;
        c++;
        int maxi = 0;
        vector<string> s(n, ""), e(n, "");
        for (int j = 0; j <= 90060; j++)
        {
            ss[j] = 0;
            ee[j] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> e[i];
            ss[st2int(s[i])] = ss[st2int(s[i])] + 1;
            ee[st2int(e[i])] = ee[st2int(e[i])] + 1;
        }
        int count = 0;
        for (int j = 0; j <= 90060; j++)
        {
            count = count + ss[j];
            count = count - ee[j];
            if (maxi < count)
            {
                maxi = count;
            }
        }
        ans[c - 1] = maxi;
    }

    for(int k = 0; k < c; k++) cout << ans[k] << endl;

    return 0;
}
