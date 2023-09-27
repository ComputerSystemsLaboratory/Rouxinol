#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define ll long long
#define ld long double
#define all(a) (a).begin(),(a).end()
#define mk make_pair
ll MOD=1000000007;
int inf=1000001000;
ll INF=100000000000000000;

int main() {
    vector<pair<double,pair<int,int>>> a(0);
    for (int i=1;i<152;i++){
        for (int j=i+1;j<152;j++){
            double e=sqrt(i*i+j*j);
            a.push_back(mk(e,mk(i,j)));
        }
    }
    sort(all(a));
    while(true){
        int f,g;
        cin >> f >> g;
        if (f==0) break;
        for (int i=0;i<40000;i++){
            if (a[i].second.first==f && a[i].second.second==g){
                cout << a[i+1].second.first << " " << a[i+1].second.second << endl;
                break;
            }
        }
    }
}

