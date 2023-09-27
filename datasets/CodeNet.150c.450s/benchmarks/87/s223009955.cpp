#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long int i=0;i<n;++i)
typedef long long int ll;

bool check(vector<int> a,int l,int r){
    for(int i=l+1;i<=r;i++){
        if(a[l]!=a[i]){
            return false;
        }
    }
    return true;
}

int main(){

    while(1){
        int h;
        cin >> h;
        if(h==0){
            break;
        }
        vector<vector<int>> m(h+1,vector<int>(6,0));
        for(int i=1;i<=h;i++){
            for(int j=0;j<5;j++){
                cin >> m[i][j];
            }
        }
        int ans=0;
        while(1){
            int at=ans;
            for(int i=1;i<=h;i++){
                bool f=false;
                int tt=0;
                for(int j=0;j<3;j++){
                    for(int k=4;k>j+1;k--){
                        f=check(m[i],j,k);
                        if(f){
                            tt+=m[i][j]*(k-j+1);
                            for(int l=j;l<=k;l++){
                                m[i][l]=0;
                            }
                            break;
                        }
                    }
                    if(f)break;
                }
                at+=tt;
            }
            // for(int i=0;i<=h;i++){
            //     for(int j=0;j<=5;j++){
            //         cout << m[i][j] << " " ;
            //     }cout << endl;
            // }cout << endl;
            if(at==ans){
                cout << ans << endl;
                break;
            }
            ans=at;
            vector<vector<int>> tt(m);
            while(1){
                for(int i=0;i<5;i++){
                    for(int j=h;j>0;j--){
                        if(m[j][i]==0){
                            for(int k=j;k>0;k--){
                                m[k][i]=m[k-1][i];
                            }
                        }
                    }
                }
                if(m==tt){
                    break;
                }else{
                    tt=m;
                }
            }
            // for(int i=1;i<=h;i++){
            //     for(int j=0;j<5;j++){
            //         cout << m[i][j] << " " ;
            //     }cout << endl;
            // }cout << endl;
        }
    }

    return 0;
}
