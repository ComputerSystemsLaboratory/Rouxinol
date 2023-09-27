#include<iostream>
using namespace std;
const int N = 1e5 + 5;
int cnt[N],a[N]; 
int main(){
    int n ;
    cin >> n;
    long long ans = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        cnt[a[i]]++;
        ans+=a[i];
    }

    int q;
    cin>>q;

    for(int i=1 , B , C ; i<=q; i++){
        cin >> B >> C ;
        ans = ans - ( (long long)cnt[B] * B );
        ans = ans + ( (long long)cnt[B] * C );
        cnt[C]+=cnt[B];
        cnt[B]=0;
        cout<<ans<<"\n";
    }
}