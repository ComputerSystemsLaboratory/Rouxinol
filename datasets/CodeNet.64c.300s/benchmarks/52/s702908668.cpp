#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
using namespace std;
string::size_type size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(i,l,k) for(int i=l;i<k;i++)
#define fd(i,l,k) for(int i=l;i>k;i--)
#define fi first
#define se second
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int n, k;
int ans = 0;
void dfs(int i,int j, int sum)
{
    if (i == n)
    {
        if (sum == k)ans++;
    }
    else if (j<=9&&sum<=k)
    {
        dfs(i + 1, j + 1, sum + j);
        dfs(i, j + 1, sum);
    }
}
 
int main()
{
    while (cin>>n>>k)
    {
        if (n == 0 && k == 0)return 0;
        ans = 0;
        dfs(0, 0, 0);
        cout << ans << endl;
    }
    return 0;
}