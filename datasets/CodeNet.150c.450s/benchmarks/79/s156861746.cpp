
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
int n,m;
struct cards
{
    int from,to;
    cards(int f,int t)
    {
        from=f,to=t;
    }
};
deque<cards> all;
deque<cards> split(int k)
{
    deque<cards> sub;
    if(k==0)return sub;
    for(;;)
    {
        cards t=all.front();
        all.pop_front();
        k -= t.to-t.from+1;
        if(k==0)
        {
            sub.pb(t);
            break;
        }
        if(k<0)
        {
            all.push_front(cards(t.to+k+1,t.to));
            t.to+=k;
            sub.pb(t);
            break;
        }
        sub.pb(t);
    }
    return sub;
}
void print(deque<cards> mount)
{
	for(int i=0;i<mount.size();i++)
	{
		cout << mount[i].from << ' ' << mount[i].to << endl;
	}
	cout << endl;
	return;
}
void shuffle(int x,int y)
{
    deque<cards> a=split(x);
    deque<cards> b=split(y);
    for(int i=a.size()-1;i>=0;i--)all.push_front(a[i]);
    for(int i=b.size()-1;i>=0;i--)all.push_front(b[i]);
}
int main()
{
    while(1)
    {
        cin >> n >> m;
        if(n==0&&m==0)break;
        all.clear();
        all.pb(cards(1,n));
        for(int i=0;i<m;i++)
        {
            int p,c;
            cin >> p >> c;
            shuffle(p-1,c);
            //print(all);
        }
        cout << n-all[0].from+1 << endl;
    }
    return 0;
}