#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n,n){
        vector<int> v(n);

        for(auto &t:v){
            cin>>t;
        }

        sort(v.begin(),v.end());
        cout << accumulate(v.begin()+1,v.end()-1,0) / (n-2) << endl;
    }
}