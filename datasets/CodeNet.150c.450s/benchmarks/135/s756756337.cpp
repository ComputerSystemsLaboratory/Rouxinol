#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N,M;

    while(cin>>N>>M,N|M){
        vector<int> h(N),w(M),h_c,w_c;

        for(auto &t:h) cin>>t;
        for(auto &t:w) cin>>t;

        for(int i=0; i<h.size(); i++){
            int sum=0;
            for(int j=i;j<h.size();j++){
                sum += h[j];
                h_c.push_back(sum);
            }
        }

        for(int i=0; i<w.size(); i++){
            int sum=0;
            for(int j=i;j<w.size();j++){
                sum += w[j];
                w_c.push_back(sum);
            }
        }

        sort(h_c.begin(),h_c.end());
        sort(w_c.begin(),w_c.end());

        int sum=0;

        for(auto t:h_c){
            sum += distance(lower_bound(w_c.begin(),w_c.end(),t),upper_bound(w_c.begin(),w_c.end(),t));
        }

        cout << sum << endl;
    }
}