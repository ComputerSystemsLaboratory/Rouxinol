#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(num) cerr << #num << " " << num << endl;
#define F0(itr, limit) for(int itr=0;itr<limit;itr++) 
#define F(itr, init, limit) for(int itr=init;itr<limit;itr++) 
#define FR(itr, init, limit) for(int itr=init;itr>limit;itr--) 
#define Fll(itr,limit) for(long long itr=0;itr<limit;itr++) 
#define coutarr(list_name) for(auto it: list_name) cout << it << " ";
#define cinarr(list_name) for(auto &it: list_name) cin >> it;
#define sz(list_name) (int)((list_name).size())
#define all(list_name) (list_name).begin(), (list_name).end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define umap unordered_map
#define endl "\n"
const long long INF = 1e18;
const long long MOD = 1e9 + 7;
using namespace std;
// "If I die here, then I'm a man that could only make it this far."



int main()
{
    IOS;
    int n;
    cin >> n;
    vll a(10050, 0);
    F(i, 1, 105)
    {
        F(j, 1, 105)
        {
            F(k, 1,105)
            {
                ll ans = i*i + j*j + k*k + i*k + k*j + j*i;
                if(ans < 10050) a[ans]++;
            }
        }
    }
    F0(i, n)
    {
        cout << a[i+1] << endl;
    }
	return 0;
}
