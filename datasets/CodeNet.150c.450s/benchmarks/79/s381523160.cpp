#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
int main(void){
    int n,r;
    while(cin>>n>>r,n){
        list<int> deck(n);
        iota(rall(deck),1);
        rep(i,r){
            int p,c;
            cin>>p>>c;
            auto itr=deck.begin();
            rep(j,p+c-2) itr++;
            rep(j,c){
                deck.push_front(*itr);
                itr=deck.erase(itr);
                itr--;
            }
        }
        cout<<deck.front()<<endl;
    }
}