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
#define MAX 2000000
#define vmax 10000
#define sentinel 2000000000
constexpr long long int inf = 1000000000000;
constexpr long long int rinf = -(INT64_MAX);
//cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);

int H,a[MAX+1];

void maxheapify(int i){
    int l=2*i,r=2*i+1,largest;
    if(l<=H&&a[l]>a[i]) largest=l;
    else largest=i;
    if(r<=H&&a[r]>a[largest]) largest=r;

    if(largest!=i){
        swap(a[i],a[largest]);
        maxheapify(largest);
    }
}

int main() {
    cin>>H;
    for(int i=1;i<=H;i++) cin>>a[i];
    for(int i=H/2;i>=1;i--) maxheapify(i);
    for(int i=1;i<=H;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    return 0;
}




