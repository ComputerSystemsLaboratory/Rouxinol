#include <bits/stdc++.h>
using namespace std;

static const int MAX = 3600*24+60*60+60;

int main(){
    while(1){
        int N;
        cin>>N;
        if(N == 0) break;
        vector<int> V(MAX,0);

        for(int i=0; i<N; i++){
            int h1,h2,m1,m2,s1,s2;
            scanf("%d:%d:%d",&h1,&m1,&s1);
            scanf("%d:%d:%d",&h2,&m2,&s2);
            int left = 3600*h1+60*m1+s1;
            int right = 3600*h2+60*m2+s2;
            V[left]++;
            V[right]--;
        }

        int ans = 0;

        for(int i=0; i<MAX; i++){
            V[i+1] += V[i];
            ans = max(ans,V[i+1]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
