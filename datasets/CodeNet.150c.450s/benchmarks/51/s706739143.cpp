#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int MAX = 30;

bool submit[MAX];

int main()
{
    int t;
    REP(MAX - 2){ cin >> t; submit[t - 1] = true;}

    REP(MAX)if(!submit[i]){ cout << i + 1 << endl; }
    return 0;
}