//Moh_K_Imar .......
//28/08/2020  ... 11,59.
//Ya Rab....
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
int main(){
    ll a;
    cin>>a;
    ll RE=0,TLE=0,WA=0,AC=0;
    for(ll i=0;i<a;i++){
        string s;
        cin>>s;
        if(s=="AC")AC++;
        else if(s=="WA")WA++;
        else if(s=="TLE")TLE++;
        else if(s=="RE")RE++;
    }
    cout<<"AC x "<<AC<<endl;
    cout<<"WA x "<<WA<<endl;
    cout<<"TLE x "<<TLE<<endl;
    cout<<"RE x "<<RE<<endl;

    return 0;
}

