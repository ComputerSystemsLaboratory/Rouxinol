#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    map<int,int> mapa;
    int n;cin>>n;
    int niz[n];
    ll suma=0;
    for(int i=0;i<n;i++){
        cin >> niz[i];
        suma+=niz[i];
        mapa[niz[i]]++;
    }
    int q;cin>>q;
    int b,c;
    for(int i=0;i<q;i++){
        cin>>b>>c;
        suma+=(c-b)*mapa[b];
        mapa[c]=mapa[c]+mapa[b];
        mapa[b]=0;
        cout << suma<<endl;
    }

}
