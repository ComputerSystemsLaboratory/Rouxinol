#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>vec(x);
    for(int i=0;i<x;i++){
        cin>>vec[i];
    }
    reverse(vec.begin(),vec.end());
    for(int i=0;i<x-1;i++){
        cout<<vec[i]<<" ";
    }
    cout<<vec[x-1]<<endl;
    
}
