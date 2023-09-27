#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n,r;
    while(cin>>n>>r,n&&r){
        vector<int> old_cards(n),new_cards(n);
        for(int i=0;i<n;i++) old_cards[i]=n-i;
        for(int j=0;j<r;j++){
            int p,c;cin>>p>>c;
            for(int i=0;i<c;i++) new_cards[i]=old_cards[p-1+i];
            for(int i=c;i<p-1+c;i++) new_cards[i]=old_cards[i-c];
            for(int i=p-1+c;i<n;i++) new_cards[i]=old_cards[i];

            for(int i=0;i<n;i++) old_cards[i]=new_cards[i];
        }
        cout<<old_cards[0]<<endl;
    }
}