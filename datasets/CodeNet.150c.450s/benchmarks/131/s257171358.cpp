#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        int a,L;
        cin>>a>>L;

        if(a==0 && L==0)break;

        vector<int> x(L);

        vector<int> v;
        v.push_back(a);

        int ans1,ans2,ans3;

        for(int i=0;1;i++){

            for(int k=0;k<L;k++)x[k]=0;

            int p=v[v.size()-1],pos=1;

            while(p>0){
                x[L-pos]=p%10;
                pos++;
                p/=10;                
            }

            vector<int> y(L),z(L);
            y=x;
            z=x;

            sort(y.begin(),y.end());
            reverse(y.begin(),y.end());
            sort(z.begin(),z.end());

            int n=0,m=0;

            for(int j=L-1;j>=0;j--){
                n*=10;
                n+=y[j];
                m*=10;
                m+=z[j];
            }

            int d=m-n;

            bool f=false;

            for(int j=0;j<v.size();j++){
                if(v[j]==d){
                    ans1=j;
                    ans2=v[j];
                    ans3=i-j+1;
                    f=true;
                }
            }

            v.push_back(d);

            if(f)break;

        }

        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }

}
