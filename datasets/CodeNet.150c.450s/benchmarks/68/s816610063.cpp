#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int t;
    vector<int> v,va;
    for(int i=0;i<n;i++){
        cin >> t;
        v.push_back(t);
    }
    sort(v.rbegin(),v.rend());
    for(auto itr=v.begin();itr!=v.end()-1;itr++){
        va.push_back(*itr-*(itr+1));
    }
    int mini=va.front();
    for(int x:va){
        mini=min(mini,x);
    }
    
    
    cout<<mini<<endl;
    
}

int main(void){
    int a;
    while(cin>>a,a){
        solve(a);
    }
    
    
    
}