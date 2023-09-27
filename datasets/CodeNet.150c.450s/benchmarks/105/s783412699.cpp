#include <iostream>
#include <vector>
#include <set> 
#include <map>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <ll> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        string s;
        cin>>s;
        int status=0;
        vector <ll> xors;
        for(int i=n-1;i>=0;i--){
            ll x=v[i];
            for(auto it:xors){
                x=min(x,x^it);
            }
            if(x==0)continue;
            if(s[i]=='0'){
                xors.push_back(x);
            }
            else {
                cout<<1<<endl;
                status=1;
                break;
            }
        }
        if(status==0)cout<<0<<endl;
    }
    return 0;
}