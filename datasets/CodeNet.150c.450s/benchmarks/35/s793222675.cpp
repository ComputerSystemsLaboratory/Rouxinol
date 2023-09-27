#include <iostream>
#include <climits>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#define MAX 1000000001

using namespace std;
#define ll long long
#define dbg if(0)



int main(){
    while(true){
        int n;
        ll ans= LLONG_MIN;
        cin>>n;
        if (n==0)break;

        ll rui[n+1];
        rui[0]=0;
        ll lowmax=LLONG_MIN;
        for(int i=1;i<=n;i++){
            cin >>rui[i];
            if(rui[i]<=0)lowmax=max(lowmax,rui[i]);
            rui[i]+=rui[i-1];
            dbg cout <<rui[i]<<" ";
        }
        dbg cout <<endl;
        //次を見る
        //今までの最小値を更新したか？
        //したなら暫定解を確定しansと比較。最大値=最小値=発見した最小値にする
        //してなければ最大値の更新をする
        //見る場所が一番後ろまで行ったら終了。
        rui[0]=min(rui[0],rui[1]);
        ll nmin=rui[0],nmax=rui[0];
        bool nmflag=false;
/*        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                ans=max(rui[j]-rui[i-1],ans);
            }
        }*/
        for(int i=0;i<=n;i++){
            if (rui[i]<nmin){
                ans=max(nmax-nmin,ans);
                nmax=rui[i];
                nmin=rui[i];
            }else{
                if(rui[i]>nmax){
                    nmax=rui[i];
                    nmflag=true;
                }
            }
            dbg cout <<nmax<<" "<<nmin<<" "<<endl;
        }
        ans=max(nmax-nmin,ans);
        dbg cout << endl;
        if(nmflag)cout<<ans<<endl;
        else cout<<lowmax<<endl;
        //cout <<ans<<endl;
    }

    return 0;
}

