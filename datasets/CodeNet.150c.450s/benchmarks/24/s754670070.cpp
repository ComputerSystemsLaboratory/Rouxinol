#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int N,M;
        cin>>N>>M;
        if(N==0 && M == 0)  break;
        vector<pair<int,int> > data(N);
        
        for(int i=0; i<N; i++){
            cin>>data[i].second>>data[i].first;
        }

        sort(data.begin(),data.end(),greater<pair<int,int> >());

        int ans = 0;

        for(int i=0; i<N; i++){
            while(1){
                if(M == 0 || data[i].second == 0) break;
                data[i].second--;
                M--;
            }
        }

        for(int i=0; i<N; i++){
            ans += data[i].first*data[i].second;
        }

        cout<<ans<<endl;
    }

    return 0;
}
