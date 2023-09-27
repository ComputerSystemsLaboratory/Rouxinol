#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <string>
const int mxN=1e5;
const int maxN=5e3;
#define ld long double
#define pb push_back
#define mp make_pair
#define ins insert
#define vi vector<int>

int main()
{
    int n;
    cin >> n;
    int cnt[100000]={};
    ll s=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        cnt[x-1]++;
        s+=x;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int b,c;
        cin >> b >> c;
        s+=cnt[b-1]*(c-b);
        cnt[c-1]+=cnt[b-1];
        cnt[b-1]=0;
        cout << s << "\n";
    }
}