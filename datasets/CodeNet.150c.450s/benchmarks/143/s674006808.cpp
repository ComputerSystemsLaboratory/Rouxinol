#include <bits/stdc++.h>

///@Tanvir

///template from: profile/hitman623
#define int         long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define for0(i,a)   for(int i=0; i<a; i++)
#define bloop(i,n)  for(int i=n-1; i>=0; i--)


#define f_in(st) freopen(st,"r",stdin)
#define f_out(st) freopen(st,"w",stdout)

#define N 100005

using namespace std;



void solve(){
    vi mp(N);
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
        mp[a[i]]++;

    }
    int q;
    cin>>q;
    while (q--)
    {
        int b, c;
        cin>>b>>c;
        ///int cntb = mp[b];
        ///cout<<"cntb= "<<mp[b]<<"\n";

        /* code */
        //int diff = c - b;
        sum += (mp[b])*(c-b);
        cout<<sum<<"\n";


        mp[c]+= mp[b];
        mp[b] = 0;
    }




}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    f_in("in.txt");
//    f_out("out.txt");
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
