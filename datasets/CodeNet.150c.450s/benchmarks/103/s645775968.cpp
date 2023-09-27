#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#pragma region defins
#define ll long long
#define loop(i,n) for (int i = 0; i < n; i++)
#define loops(i,f,n) for (int i = (f); i < n; i++)
#define INF 100000000000000
#define sort(a) sort(a.begin(),a.end())
#define rsort(a) sort(a.rbegin(),a.rend())
using namespace std;
#pragma endregion
int n, s, ans;
void dfs(int num, int sum, int count)
{
    //cout << "num:" << num << " sum:" << sum << " count:" << count << endl;
    if (sum == s&&count == n)
    {
        ans++;
        //cout << "ans: " << ans << endl;
    }
    if (sum > s || num == 10 || count == n)return;
    dfs(num + 1, sum + num, count + 1);
    dfs(num + 1, sum, count);
}
 
int main()
{
    while (1)
    {
        cin >> n >> s;
        if (n == 0 && s == 0)break;
        else
        {
            ans = 0;
            dfs(0, 0, 0);
            cout << ans << endl;
        }
    }
}
