#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Card{
    int num,id;
    string str;
};

ll partition(Card c[],ll p,ll r){
    ll x=c[r].num;
    ll i=p-1;
    for(ll j=p;j<r;j++){
        if(c[j].num<=x){
            i++;
            swap(c[i],c[j]);
        }
    }
    swap(c[i+1],c[r]);
    return i+1;
}

void qsort(Card c[],ll p,ll r){
    if(p<r){
        ll q = partition(c,p,r);
        qsort(c,p,q-1);
        qsort(c,q+1,r);
    }
}

//ll bs(ll num,const vector<pair<string,ll> > &v, ll n){
//    ll l=-1,r=n-1;
//    for(;r-l>1;){
//        ll mid=(l+r)/2;
//        if(v[mid].second < num){
//            l = mid;
//        }else{
//            r = mid;
//        }
//    }
//    return l+1;
//}

void check(Card c[],int n){

    for(int i=0;i<n-1;i++){
        if(c[i].num<c[i+1].num)continue;
        if(c[i].id<c[i+1].id)continue;
        cout << "Not stable\n";
        return;
    }
    cout << "Stable\n";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    Card card[100000];
    for(ll i=0;i<n;i++){
        cin >> card[i].str >> card[i].num;
        card[i].id=i;
    }
//    auto res=unique(tab.begin(),tab.end());
//    tab.erase(res,tab.end());
//    vector<pair<string, ll> > sub(card);
    qsort(card,0,n-1);

    check(card,n);
    for(int i=0;i<n;i++){
        cout << card[i].str << " " << card[i].num << endl;
    }
}

