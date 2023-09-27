#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair
int gcd(int a,int b){
    if(b==0)
     return a;
    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    map<string,int> mp;
    while(t--){
        string str;
        cin>>str;
        mp[str]++;
    }
    cout<<"AC x "<<mp["AC"]<<endl;
    cout<<"WA x "<<mp["WA"]<<endl;
    cout<<"TLE x "<<mp["TLE"]<<endl;
    cout<<"RE x "<<mp["RE"]<<endl;
}
