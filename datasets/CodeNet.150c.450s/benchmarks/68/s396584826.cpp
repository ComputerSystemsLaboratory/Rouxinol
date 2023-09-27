#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <functional>
using namespace std;
const int MOD = 1000000007;
typedef long long ll;
typedef pair<ll, ll> p;
const int INF = (1 << 28);
const int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
const int Dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}, Dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
#define yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define no cout << "No" << endl
#define NO cout << "NO" << endl
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
int n[50000];
int a[50000][1000];
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int j=0;
    while(true){
        cin >> n[j];
        if(n[j]==0){
            break;
        }
    for (int i = 0; i < n[j]; i++)
        cin >> a[j][i];
    j++;
    }
    for(int i=0;i<j;i++){
        sort(a[i],a[i]+n[i]);
    }
    int ans[j];
    for(int i=0;i<j;i++){
        ans[i]=INF;
    }
    for(int i=0;i<j;i++){
        int temp=INF;
        for(int k=0;k<n[i]-1;k++){
            int sub=a[i][k+1]-a[i][k];
            temp=min(temp,sub);
        }
        ans[i]=temp;
    }
    for(int i=0;i<j;i++)
    cout << ans[i] << "\n";
}
