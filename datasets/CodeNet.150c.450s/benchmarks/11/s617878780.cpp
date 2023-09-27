#include <iostream>
#include <utility>
#include <vector>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define RREP(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR(i, l, r) for(int i = l; i < r; i++)
#define RFOR(i, l,r) for(int i= (l)-1; i>= (r) ; i--)

const char surt[] = {'S','H','C','D'};

bool fun(pair<char, int> a, pair<char, int> b)
{
    if(a.first == 'L')
        return false;
    else if(b.first == 'L')
        return true;
    else if(a.first == b.first)
        return a.second < b.second;
    else REP(i, 4)
    {
        if(surt[i] == a.first)
            return true;
        if(surt[i] == b.first)
            return false;
    }
    return false;
}

// a[l,m) and a[m,r) are sorted
void merge(vector<pair<char,int> >& a, int l, int m, int r)
{
    int f = m-l, g = r-m;
    vector< pair<char, int> > x(f+1), y(g+1);
    REP(i, f)
        x[i] = a[l+i];
    REP(i, g)
        y[i] = a[m+i];
    x[f] = pair<char, int>('L', 14);
    y[g] = pair<char, int>('L', 14);
    int k = 0, h = 0;
    FOR(i, l, r)
    {
        if(fun(x[k], y[h]))
            a[i] = x[k++];
        else
            a[i] = y[h++];
    }
}

void msort(vector< pair<char, int> >& a,int l, int r)
{
    if(r - l <= 1)
        return;

    int d = (l+r) /2;
    msort(a, l, d);
    msort(a, d, r);
    merge(a, l, d, r);
}

int main()
{
    vector< pair<char, int> > a(52);
    int n;
    cin >> n;
    REP(i, n)
        cin >> a[i].first >> a[i].second;
    msort(a, 0, n);
    int k = 1, s = 0, i = 0;
    while(k <= 13 || s < 3)
    {
        if(k > 13) { k = 1; s++; }
        if(i >= n || a[i] != pair<char,int>(surt[s], k))
            cout << surt[s] << ' ' << k << '\n';
        else
            i++;
        k++;
    }
    return 0;
}