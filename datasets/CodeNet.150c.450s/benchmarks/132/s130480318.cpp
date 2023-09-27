#include <bits/stdc++.h>

using namespace std;

long long INF=1e15;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        int n,p;
        cin>>n>>p;
        if(n+p==0)break;
        int pos=0;
        vector<int> a(n);
        bool flag=true;
        while(flag){
            if(p>0){
                a[pos]++;
                p--;
            }
            else{
                if(a[pos]>0){
                    p=a[pos];
                    a[pos]=0;
                }
            }

            bool f=(p==0);

            for(int i=0;i<n;i++){
                if(i==pos)continue;
                if(a[i]!=0)f=false;
            }

            if(f){
                cout<<pos<<endl;
                flag=false;
            }
            pos++;
            pos%=n;
        }
    }
}
