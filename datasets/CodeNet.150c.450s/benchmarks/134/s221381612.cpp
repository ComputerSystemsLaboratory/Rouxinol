#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void Pre(vector<tuple<ll,ll,ll,ll,ll> > &idlr, ll node = 0)
{
    cout << " " << get<0>(idlr[node]);
    if(get<1>(idlr[node]) != -1){
        Pre(idlr, get<1>(idlr[node]));
    }
    if(get<2>(idlr[node]) != -1){
        Pre(idlr, get<2>(idlr[node]));
    }
}

void Ino(vector<tuple<ll,ll,ll,ll,ll> > &idlr, ll node = 0)
{
    if(get<1>(idlr[node]) != -1){
        Ino(idlr, get<1>(idlr[node]));
    }

    cout << " " << get<0>(idlr[node]);

    if(get<2>(idlr[node]) != -1){
        Ino(idlr, get<2>(idlr[node]));
    }
}

void Pos(vector<tuple<ll,ll,ll,ll,ll> > &idlr, ll node)
{
    if(get<1>(idlr[node]) != -1){
        Pos(idlr, get<1>(idlr[node]));
    }
    
    if(get<2>(idlr[node]) != -1){
        Pos(idlr, get<2>(idlr[node]));
    }

    cout << " " << get<0>(idlr[node]); 
}

int main()
{
    ll n;
    cin >> n;
    vector<tuple<ll,ll,ll,ll,ll> > idlr(n);//0id 1l 2r 3p 4s
    for(ll i = 0;i < n;i++){
        cin >> get<0>(idlr[i]) >> get<1>(idlr[i]) >> get<2>(idlr[i]);
    }

    sort(idlr.begin(),idlr.end());

    for(ll i = 0;i < n;i++){
        if(get<1>(idlr[get<0>(idlr[i])]) != -1){
            get<3>(idlr[get<1>(idlr[get<0>(idlr[i])])]) = get<0>(idlr[i]);
            get<4>(idlr[get<1>(idlr[get<0>(idlr[i])])]) = get<2>(idlr[get<0>(idlr[i])]);
        }
        if(get<2>(idlr[get<0>(idlr[i])]) != -1){
            get<3>(idlr[get<2>(idlr[get<0>(idlr[i])])]) = get<0>(idlr[i]);
            get<4>(idlr[get<2>(idlr[get<0>(idlr[i])])]) = get<2>(idlr[get<0>(idlr[i])]);
        }
    }

    ll root;
    for(ll i = 0;i < n;i++){
        if(get<3>(idlr[i]) == 0 && get<4>(idlr[i]) == 0){
            root = get<0>(idlr[i]);
        }
    }

    cout << "Preorder\n";
    Pre(idlr, root);
    cout << "\nInorder\n";
    Ino(idlr, root);
    cout << "\nPostorder\n";
    Pos(idlr, root);
    cout << "\n";
 
    return 0;
}

