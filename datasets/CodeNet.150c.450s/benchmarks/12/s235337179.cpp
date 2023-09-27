#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int di[] = { 0, 1, 0, -1 }, dj[] = { 1, 0, -1, 0 };
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define all(v) (v).begin(), (v).end()
#define MAX 100000
#define vmax 10000
#define sentinel 2000000000
constexpr long long int inf = 1000000000000;
constexpr long long int rinf = -(INT64_MAX);
//cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);

int parent(int i){return i/2;}
int left(int i){return i*2;}
int right(int i){return i*2+1;}

int main() {
    int n,a[MAX+1];
    cin>>n;
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        cout<<"node "<<i<<": key = "<<a[i]<<", ";
        if(parent(i)>=1) cout<<"parent key = "<<a[parent(i)]<<", ";
        if(left(i)<=n) cout<<"left key = "<<a[left(i)]<<", ";
        if(right(i)<=n) cout<<"right key = "<<a[right(i)]<<", ";
        cout<<endl;
    }
    return 0;
}




