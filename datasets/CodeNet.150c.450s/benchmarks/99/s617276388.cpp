#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int M = 1000, C = 100, X = 10, I = 1;
int DIG[] = {M, C, X, I};
char S[] = "mcxi";

int m2i(string s)
{
    int ans = 0, num = 1, n;

    REP(s.size())
    {
        n = s[i] - '0';
        if(n > 1 && n <= 9){ num = n; continue;}
        rep(j, 4)if(s[i] == S[j]){ ans += num * DIG[j]; num = 1;}
    }

    return ans;
}

string i2m(int n)
{
    string ans = "";
    REP(4)
    {
        if(n / DIG[i] > 0)
        {
            if(n / DIG[i] > 1) ans += (n / DIG[i]) + '0';
            ans += S[i];
            n %= DIG[i];
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    REP(n)
    {
        string s1, s2; cin >> s1 >> s2;
        int ans = m2i(s1) + m2i(s2);
        cout << i2m(ans) << endl;

    }

    return 0;
}