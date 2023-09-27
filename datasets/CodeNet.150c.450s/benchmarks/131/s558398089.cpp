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

const int MAXL = 6, MAXI = 20;
int a[MAXI + 1];

int main()
{
    int l;
    while(cin >> a[0] >> l && l)
    {
        int ansj = 0, ansi = 0;
        for(int i = 1; i < 25; i++)
        {
            int tmp = a[i - 1];
            vector<int> dig;
            rep(j, l){ dig.push_back(tmp % 10); tmp /= 10;}   
            sort(all(dig)); //rep(j,l) cout << dig[j] ; cout << endl;
            int maxa = 0, mina = 0;
            rep(j, l)
            {
                mina *= 10; mina += dig[j];
                maxa *= 10; maxa += dig[l - j - 1];
            }
            a[i] = maxa - mina;
            rep(j,i)if(a[i] == a[j]){ ansi = i; ansj = j; break;}
            if(ansi > 0) break;
        }
        cout << ansj << " " << a[ansi]<<" " << ansi - ansj << endl;
    }

    return 0;
}