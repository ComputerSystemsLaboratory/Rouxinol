#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,nl,ns;
    while(cin>>m>>ns>>nl,m){
        vector<int> p(m);
        for(int i=0;i<m;i++) cin>>p[i];
        int res=0;
        int gap=0;
        for(int i=0;i<=10000;i++){
            int mi=1000000;
            int ma=0;
            int cnt=0;
            for(int j=0;j<m;j++){
                if(i<=p[j]){
                    cnt++;
                    mi=min(mi,p[j]);
                }
                else{
                    ma=max(ma,p[j]);
                }
            }
            int ga=mi-ma;
            if(ns<=cnt && cnt<=nl){
                if(gap<ga){
                    res=cnt;
                    gap=ga;
                }
                else{
                    res=max(cnt,res);
                }
            }
        }

        cout<<res<<endl;

    }
    return 0;

}