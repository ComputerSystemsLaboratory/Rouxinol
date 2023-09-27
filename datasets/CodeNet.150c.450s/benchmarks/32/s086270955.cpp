#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,nmin,nmax;
    while(true){
        cin>>m>>nmin>>nmax;
        if(m==0)break;
        int cnt=0;
        int t=0;
        int gap=0;
        vector<int> p(m);
        for (int i = 0; i < m; ++i) {
            cin>>p[i];
        }
        for (int i = 0; i < m-1; ++i) {
            ++t;
            if(p[i]==p[i+1]){
                while(p[i]==p[i+1]){
                    ++i;
                    ++t;
                }
            }
            if(cnt+t<=nmax){
                if(cnt+t<=nmin||gap<=p[i]-p[i+1]){
                    cnt+=t;
                    t=0;
                    if(cnt>=nmin)gap=p[i]-p[i+1];
                }
            }
            else break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
